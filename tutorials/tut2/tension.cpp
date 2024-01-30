#include <iostream>

#define g 9.81

int main() {
  double m1 = 100.0;
  double m2 = 50.0;
  std::cout << "The tension in the cord is " << ((2 * m1 * m2) / (m1 + m2)) * g
            << "!" << std::endl;

  return 0;
}
