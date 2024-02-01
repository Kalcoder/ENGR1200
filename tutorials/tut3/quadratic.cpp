#include <cmath>
#include <iostream>

int main() {
  double a = 0.0;
  double b = 0.0;
  double c = 0.0;

  std::cout << "Please enter the a value: ";
  std::cin >> a;

  if (a == 0.0) {
    std::cout << "a cannot be 0!";
    return 0;
  }

  std::cout << "Please enter the b value: ";
  std::cin >> b;

  std::cout << "Please enter the c value: ";
  std::cin >> c;

  double discriminant = std::pow(b, 2) - 4.0 * a * c;
  if (discriminant < 0.0) {
    std::cout << "There are no real roots for the provided equation!"
              << std::endl;
    return 0;
  }

  if (discriminant == 0.0) {
    std::cout << "The only root of the provided equation is \"" << -b / (2 * a)
              << "\"!" << std::endl;
    return 0;
  }

  std::cout << "x1 = " << (-b + std::sqrt(discriminant)) / (2 * a) << ", ";
  std::cout << "x2 = " << (-b - std::sqrt(discriminant)) / (2 * a) << std::endl;

  return 0;
}
