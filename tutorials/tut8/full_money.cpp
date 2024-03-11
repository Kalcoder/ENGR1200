#include <cmath>
#include <iostream>

using namespace std;

// String representations for ones digits
// Don't bother fully printing zero, it won't be used
string ones[] = {"",     "one", "two",   "three", "four",
                 "five", "six", "seven", "eight", "nine"};
// String representations for numbers 10 through 19
// gotta love english being weird with these numbers
string teens[] = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                  "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
// String representations for tens digits
// There's no word for a 0 in the tens digits, and ten is already covered above.
string tens[] = {"",      "",      "twenty",  "thirty", "fourty",
                 "fifty", "sixty", "seventy", "eighty", "ninety"};

// Use recursion to only require cases for each set of 10^3
// shoutouts to the teens being weirdly named in english making this far more
// difficult than it ever needed to be
string num_to_english(int num) {
  // Program only needs to support < 1 million
  if (num < 10) { // 0 - 9
    return ones[num];
  } else if (num < 20) { // 10 - 19
    return teens[num - 10];
  } else if (num < 100) { // 20 - 99
    return tens[num / 10] +
           (num % 10 == 0 ? "" : " " + num_to_english(num % 10));
  } else if (num < 1000) { // 100 - 999
    return num_to_english(num / 100) + " hundred" +
           (num % 100 == 0 ? "" : " " + num_to_english(num % 100));
  } else if (num < 1000000) { // 1000 - 999999
    return num_to_english(num / 1000) + " thousand" +
           (num % 1000 == 0 ? "" : " " + num_to_english(num % 1000));
  } else {
    return "";
  }
}

int main() {
  float value;
  cout << "Please enter the amount to convert to text: $";
  cin >> value;
  string whole_text;

  // Get text for whole part
  whole_text = num_to_english(floor(value));

  // Extract decimal part
  int decimal = value * 1e2 - floor(value) * 1e2;
  string decimal_text = num_to_english(decimal);

  cout << whole_text << " dollars and " << decimal_text << " cents." << endl;
  return 0;
}
