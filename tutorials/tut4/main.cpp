#include <cmath>
#include <iomanip>
#include <iostream>

#define COFFEE_PRICE 4.99 // Price of a cup of coffee
#define DONUT_PRICE 1.99  // Price of a donut
#define TAX 0.13          // Cost of HST (independant tax calculation)
#define TAX_INCL 1.13     // Cost including HST (grand total calculations)

using namespace std;

int main() {
  int coffee = 0;
  int donuts = 0;

  double coffeeTotal = 0;
  double donutTotal = 0;

  cout << "How many cups of coffee would you like to purchase ($4.99 each): ";
  cin >> coffee;

  cout << "How many donuts would you like to purchase ($1.99 each): ";
  cin >> donuts;

  coffeeTotal = coffee * COFFEE_PRICE;
  donutTotal = donuts * DONUT_PRICE;

  // Take number of digits in final total and set number width
  // ceil(log10(total)) will provide digits in whole portion of number,
  // add 3 more columns for decimal point and two precision.
  // The sole reason this exists is to ensure the dollar sign is consistently
  // aligned properly and in a way that makes sense on the receipt.
  int width = ceil(log10((coffeeTotal + donutTotal) * TAX_INCL)) + 3;

  cout << "Jim Hortons" << endl;
  cout << "Customer Receipt" << endl;
  cout << "-----------------" << endl;
  cout << "Coffee\t\tx" << coffee << "\t$" << fixed << setprecision(2) << right
       << setw(width) << coffeeTotal << endl;
  cout << "Donuts\t\tx" << donuts << "\t$" << fixed << setprecision(2) << right
       << setw(width) << donutTotal << endl;
  cout << endl;
  cout << "Subtotal\t\t$" << fixed << setprecision(2) << right << setw(width)
       << coffeeTotal + donutTotal << endl;
  cout << "HST\t\t13%\t$" << fixed << setprecision(2) << right << setw(width)
       << (coffeeTotal + donutTotal) * TAX << endl;
  cout << endl;
  cout << "Total\t\t\t$" << fixed << setprecision(2) << right << setw(width)
       << (coffeeTotal + donutTotal) * TAX_INCL << endl;

  return 0;
}
