#include <iostream>

using namespace std;

int main() {
  double base, height = 0.0;

  cout << "Please enter the length of the base of the triangle (in inches): ";
  cin >> base;

  cout << "Please enter the length of the height of the triangle (in inches): ";
  cin >> height;

  cout << "The area of the triangle is " << 0.5 * base * height << " inches"
       << endl;

  return 0;
}
