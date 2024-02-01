#include <cmath>
#include <iostream>
#include <ostream>

#define g 9.81

void area_of_circle();
void volume_of_sphere();
void tension_in_cord();

int main() {
  area_of_circle();
  volume_of_sphere();
  tension_in_cord();

  return 1;
}

void area_of_circle() {
  std::cout << "Please enter the radius of the circle: ";
  double radius = 0.0;
  std::cin >> radius;

  std::cout << "The area of the circle is " << M_PI * pow(radius, 2) << "!"
            << std::endl;
}

void volume_of_sphere() {
  std::cout << "Please enter the radius of the sphere: ";
  double radius = 0.0;
  std::cin >> radius;
  std::cout << "The volume of the sphere is "
            << (4.0 / 3.0) * M_PI * pow(radius, 3) << "!" << std::endl;
}

void tension_in_cord() {
  double m1 = 100.0;
  double m2 = 50.0;
  std::cout << "The tension in the cord is " << (2 * m1 * m2) / (m1 + m2) * g
            << "!" << std::endl;
}
