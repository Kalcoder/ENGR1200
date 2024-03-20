#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

#define SIZE 22

bool compare_float(float a, float b);
float sum(float *arr);
float average(float *arr);
float min(float *arr);
float max(float *arr);
void bsort(float *arr);
void reverse(float *arr);
int bsearch(float *arr, float key);
void display(float *arr);

int main() {
  float arr[SIZE];
  ifstream temps("temprature.txt");

  for (int i = 0; i < SIZE; i++) {
    temps >> arr[i];
  }

  cout << "Array: ";
  display(arr);
  cout << "Sum: " << sum(arr) << endl;
  cout << "Average: " << average(arr) << endl;
  cout << "Min: " << min(arr) << endl;
  cout << "Max: " << max(arr) << endl;
  bsort(arr);
  cout << "Sorted: ";
  display(arr);
  cout << "Index of 20: " << bsearch(arr, 20) << endl;
  reverse(arr);
  cout << "Reversed: ";
  display(arr);

  return 0;
}

bool compare_float(float a, float b) {
  return fabs(a - b) < std::numeric_limits<float>::epsilon();
}

float sum(float *arr) {
  float sum = 0;
  for (int i = 0; i < SIZE; i++) {
    sum += arr[i];
  }
  return sum;
}

float average(float *arr) {
  return sum(arr) / SIZE;
}

float min(float *arr) {
  float min = arr[0];
  for (int i = 1; i < SIZE; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

float max(float *arr) {
  float max = arr[0];
  for (int i = 1; i < SIZE; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

void bsort(float *arr) {
  for (int i = 0; i < SIZE - 1; i++) {
    for (int j = 0; j < SIZE - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        float temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void reverse(float *arr) {
  for (int i = 0; i < SIZE / 2; i++) {
    float temp = arr[i];
    arr[i] = arr[SIZE - i - 1];
    arr[SIZE - i - 1] = temp;
  }
}

int bsearch(float *arr, float key) {
  int low = 0;
  int high = SIZE - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (compare_float(arr[mid], key)) {
      return mid;
    } else if (arr[mid] > key) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

void display(float *arr) {
  for (int i = 0; i < SIZE; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

