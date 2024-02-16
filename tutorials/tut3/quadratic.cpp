#include <cmath>
#include <iostream>

int main() {
  double a = 0.0;
  double b = 0.0;
  double c = 0.0;

  std::cout << "Please enter the a value: ";
  std::cin >> a;

  std::cout << "Please enter the b value: ";
  std::cin >> b;

  std::cout << "Please enter the c value: ";
  std::cin >> c;

  if (a == 0.0) {
    if (b == 0.0) {
      if (c == 0.0) {
        std::cout << "There are infinite roots for the provided equation."
                  << std::endl;
        return 0;
      }

      std::cout << "There are no real roots for the provided equation."
                << std::endl;
      return 0;
    }

    std::cout << "The only real root of the provided equation is x=" << -c / b
              << "." << std::endl;
    return 0;
  }

  double discriminant = std::pow(b, 2) - 4.0 * a * c;
  if (discriminant < 0.0) {
    std::cout << "There are no real roots for the provided equation."
              << std::endl;
    return 0;
  }

  if (discriminant == 0.0) {
    std::cout << "The only root of the provided equation is \"" << -b / (2 * a)
              << "\"!" << std::endl;
    return 0;
  }

  std::cout << "The roots of the equation are x1 = "
            << (-b + std::sqrt(discriminant)) / (2 * a) << ", ";
  std::cout << "x2 = " << (-b - std::sqrt(discriminant)) / (2 * a) << std::endl;

  return 0;
}
