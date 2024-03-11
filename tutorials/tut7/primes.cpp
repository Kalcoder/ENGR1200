#include <iostream>

using namespace std;

int main() {
  int highest_num = 0;
  cout << "Please enter the number you would like to find primes up to: ";
  cin >> highest_num;

  bool prime = true;

  for (int i = 1; i <= highest_num; i++) {
    prime = true;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        prime = false;
        break;
      }
    }
    if (prime)
      cout << i << endl;
  }

  return 0;
}
