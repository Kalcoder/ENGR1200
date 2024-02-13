#include <iostream>

using namespace std;

int main() {
  int start, numOfInts;

  cout << "Please enter the number you would like to start at: ";
  cin >> start;

  cout << "How many numbers would you like to include in the sum? ";
  cin >> numOfInts;

  cout << "The sum of the numbers between " << start << " and "
       << numOfInts + start << " = "
       << ((numOfInts / 2) * (2 * start + (numOfInts - 1))) << endl;

  return 0;
}
