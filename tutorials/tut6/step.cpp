#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int x = 0;

  cout << "Please enter the 'x' value: ";
  cin >> x;

  if (x <= 0) {
    cout << exp2(-3 * x) << endl;
  } else {
    cout << log(x) + 10 << endl;
  }

  return 0;
}
