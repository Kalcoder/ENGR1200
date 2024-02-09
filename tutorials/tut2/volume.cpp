#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main() {
  std::cout << "Please enter the radius of the sphere: ";
  double radius = 0.0;
  std::cin >> radius;
  std::cout << "The volume of the sphere is "
            << (4.0 / 3.0) * M_PI * std::pow(radius, 3) << "!" << std::endl;

  return 0;
}
