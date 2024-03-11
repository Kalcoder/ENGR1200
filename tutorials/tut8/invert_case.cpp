#include <cctype>
#include <iostream>

using namespace std;

string invert_case(string input);

int main() {
  string message;
  cout << "Please enter a message to invert the casing of" << endl;
  getline(cin, message);

  cout << "Inverted message: " << invert_case(message) << endl;

  return 0;
}

string invert_case(string input) {
  char *input_arr = input.data();

  for (int i = 0; i < input.length(); i++) {
    char letter = input_arr[i];

    // Only works with default locale (sorry non latin letters!)
    if (islower(letter)) {
      input_arr[i] = toupper(letter);
    } else if (isupper(letter)) {
      input_arr[i] = tolower(letter);
    }
  }

  return string(input_arr);
}
