#include <iostream>

using namespace std;

int main() {
  int toonie_count;
  int loonie_count;
  int quarter_count;
  int dime_count;
  int nickel_count;
  int penny_count;

  double price = 0.0;
  double running_total;

  cout << "Please enter the price to split into coins: " << endl;
  cin >> price;
  running_total = price;

  toonie_count = price / 2;
  running_total -= toonie_count * 2;
  loonie_count = running_total / 1;
  running_total -= loonie_count;
  quarter_count = running_total / 0.25;
  running_total -= quarter_count * 0.25;
  dime_count = running_total / 0.10;
  running_total -= dime_count * 0.1;
  nickel_count = running_total / 0.05;
  running_total -= nickel_count * 0.05;
  penny_count = running_total / 0.01;

  cout
      << "The fewest coins needed to split $" << price << " is: \n"
      << (toonie_count > 0 ? "\t" + to_string(toonie_count) + " Toonies\n" : "")
      << (loonie_count > 0 ? "\t" + to_string(loonie_count) + " Loonies\n" : "")
      << (quarter_count > 0 ? "\t" + to_string(quarter_count) + " Quarters\n"
                            : "")
      << (dime_count > 0 ? "\t" + to_string(dime_count) + " Dimes\n" : "")
      << (nickel_count > 0 ? "\t" + to_string(nickel_count) + " Nickels\n" : "")
      << (penny_count > 0 ? "\t" + to_string(penny_count) + " Pennies\n" : "")
      << endl;

  return 0;
}
