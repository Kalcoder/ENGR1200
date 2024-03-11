#include <iostream>

using namespace std;

int main() {
  unsigned int year;
  cout << "Please enter a year: ";
  cin >> year;

  cout << (year % 100 == 0 ? year % 400 == 0 ? "Leap" : ""
           : year % 4 == 0 ? "Leap"
                           : "")
       << endl;

  return 0;
}
