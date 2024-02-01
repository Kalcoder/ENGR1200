#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

int main() {
  double surfaceArea = 0.0;
  double radius = 0.0;

  std::cout << "Please enter the surface area of the cylinder: ";
  std::cin >> surfaceArea;

  std::cout << "Please enter the radius of the cylinder: ";
  std::cin >> radius;

  std::cout << "The height of the cylinder is "
            << (surfaceArea - 2 * M_PI * std::pow(radius, 2)) /
                   (2 * M_PI * radius)
            << std::endl;

  return 0;
}
