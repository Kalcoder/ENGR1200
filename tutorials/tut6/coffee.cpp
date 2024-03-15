#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
  // Coffee prices
  const float SMALL_PRICE = 3.99;
  const float MEDIUM_PRICE = 4.99;
  const float LARGE_PRICE = 5.99;

  // Variables for handling user input
  string rawSelection = "";
  int selection;

  // Start a loop that can only be broken out of if the input is valid
  while (true) {
    // Prompt the user to select a coffee size and store the raw string input
    cout << "Please enter the coffee size you would like to check the price of "
            "(1: Small, 2: Medium, 3: Large): ";
    cin >> rawSelection;

    // Try to parse the raw input from the console and use a switch to check the
    // coffee size. Throw an invalid_argument exception if anything goes wrong.
    try {
      selection = stoi(rawSelection);

      switch (selection) {
      case 1:
        cout << "The cost of a small coffee is $" << SMALL_PRICE << "!" << endl;
        break;
      case 2:
        cout << "The cost of a medium coffee is $" << MEDIUM_PRICE << "!"
             << endl;
        break;
      case 3:
        cout << "The cost of a large coffee is $" << LARGE_PRICE << "!" << endl;
        break;
      default:
        throw invalid_argument("Coffee type");
      }

      return 0;
    } catch (invalid_argument) {
      cout << "The input you have provided is invalid! Please check your input "
              "and try again!"
           << endl;
    }
  }
}
