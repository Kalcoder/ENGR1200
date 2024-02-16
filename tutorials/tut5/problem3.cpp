#include <cmath>
#include <iostream>

using namespace std;

double maxLoad(double length, double width, double height, double maxStress);

int main() {
  // 3a
  cout << "Max load for 8ft long 2\"x4\" beam with stress of 3000lb/in2: "
       << maxLoad(8.0, 2.0, 4.0, 3000) << "lbs" << endl;

  // 3b
  cout << "Max load for 8ft long 3\"x6\" beam with stress of 3000lb/in2: "
       << maxLoad(8.0, 3.0, 6.0, 3000) << "lbs" << endl;
  return 0;
}

// Calculate the max load of a rectangular beam
double maxLoad(double length, double width, double height, double maxStress) {
  return (maxStress * ((width * pow(height, 3)) / 12)) /
         (length * 0.5 * height);
}
