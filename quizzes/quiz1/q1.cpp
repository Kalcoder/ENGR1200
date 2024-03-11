#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
  ifstream price_file("HouseSalePrice.txt");
  ofstream report_file("DurhamHouseStates.out");

  // Initialize srand
  srand(time(0));

  int num_of_houses = rand() % 499 + 501;

  float all_mean = 0.0f;
  int current_price = 0;
  int all_home_count = 0;
  int min_price = INT_MAX;
  int max_price = 0;

  while (!price_file.eof()) {
    price_file >> current_price;
    min_price = min(min_price, current_price);
    max_price = max(max_price, current_price);

    all_mean += current_price;
    all_home_count++;
  }

  all_mean /= all_home_count;

  float desired_stddev = 0.0f;
  int current_home = 1;

  price_file.close();
  price_file.open("HouseSalePrice.txt");

  while (!price_file.eof()) {
    price_file >> current_price;
    if (current_home > num_of_houses) {
      break;
    }
    desired_stddev += pow(current_price - all_mean, 2);
  }

  desired_stddev = sqrt(desired_stddev / num_of_houses);

  report_file << "Total number of homes: " << all_home_count << "\n" << endl;
  report_file << "Overall maximum sale price: " << max_price << "\n" << endl;
  report_file << "Overall minimum sale price: " << min_price << "\n" << endl;
  report_file << "Overall average sale price: " << all_mean << "\n" << endl;
  report_file << "Number of houses in my group(x): " << num_of_houses << "\n"
              << endl;
  report_file << "Standard deviation of my group(x): " << desired_stddev
              << endl;

  price_file.close();
  report_file.close();

  return 0;
}
