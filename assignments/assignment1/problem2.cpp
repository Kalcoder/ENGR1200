#include <iostream>

using namespace std;

int main() {
  int number = 0;

  while (true) {
    cout << "Please enter a positive integer (enter any negative number or '0' "
            "to quit): ";
    cin >> number;

    if (number <= 0) {
      break;
    }

    for (int i = number; i > 0; i--) {
      if (number % i == 0) {
        cout << i << endl;
      }
    }

    cout << endl;
  }

  return 0;
}
