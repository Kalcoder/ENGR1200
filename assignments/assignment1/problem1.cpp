#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream resistancesFile("resistances.txt");

  double r1, r2, r3, r4, r5, r6;

  if (resistancesFile.fail()) {
    cout << "The 'resistances.txt' file was not found!" << endl;
    return 1;
  }

  while (!resistancesFile.eof()) {
    resistancesFile >> r1 >> r2 >> r3 >> r4 >> r5 >> r6;

    cout << ((((r1 + r2) * r4 * r6) / ((r3 + r4) * r1 * r5)) == 7.5 ? "Good"
                                                                    : "Bad")
         << " Design values: " << r1 << " " << r2 << " " << r3 << " " << r4
         << " " << r5 << " " << r6 << " " << endl;
  }

  resistancesFile.close();
  return 0;
}
