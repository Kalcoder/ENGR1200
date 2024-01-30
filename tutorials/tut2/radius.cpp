#include <cmath>
#include <iostream>

int main() {
  std::cout << "Please enter the radius of the circle: ";
  double radius = 0.0;
  std::cin >> radius;
  std::cout << "The area of the circle is " << (M_PI * pow(radius, 2)) << "!"
            << std::endl;

  return 0;
}
