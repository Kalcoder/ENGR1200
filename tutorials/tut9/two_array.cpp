#include <iostream>

using namespace std;

void extractodd(int* arr, int size, int* new_arr);
void extracteven(int* arr, int size, int* new_arr);
void merge(int* arr1, int size1, int* arr2, int size2, int* new_arr);
void mergeSort(int* arr1, int size1, int* arr2, int size2, int* new_arr);
void bsort(int* arr, int size);
void display(int* arr, int size);

int main() {
  int size1, size2;
  cout << "Enter the size of the first array: ";
  cin >> size1;
  cout << "Enter the size of the second array: ";
  cin >> size2;
  
  int arr1[size1], arr2[size2];

  int i = 0;
  cout << "Enter the elements of the first array: ";
  while (i < size1) {
    cin >> arr1[i];
    i++;
  }

  i = 0;
  cout << "Enter the elements of the second array: ";
  while (i < size2) {
    cin >> arr2[i];
    i++;
  }

  int odd1[size1 + 1], odd2[size2 + 1];
  int even1[size1 + 1], even2[size2 + 1];
  int merged[size1 + size2];
  int mergedSorted[size1 + size2];

  extractodd(arr1, size1, odd1);
  extractodd(arr2, size2, odd2);
  extracteven(arr1, size1, even1);
  extracteven(arr2, size2, even2);
  merge(arr1, size1, arr2, size2, merged);
  mergeSort(arr1, size1, arr2, size2, mergedSorted);

  cout << "Odd elements of the first array: ";
  display(odd1, size1);
  cout << "Odd elements of the second array: ";
  display(odd2, size2);
  cout << "Even elements of the first array: ";
  display(even1, size1);
  cout << "Even elements of the second array: ";
  display(even2, size2);
  cout << "Merged array: ";
  display(merged, size1 + size2);
  cout << "Merged and sorted array: ";
  display(mergedSorted, size1 + size2);

  return 0;
}

void extractodd(int* arr, int size, int* new_arr) {
  int i = 0;
  int j = 0;
  while (i < size) {
    if (arr[i] % 2 != 0) {
      new_arr[j] = arr[i];
      j++;
    }
    i++;
  }
  new_arr[j] = -1;
}

void extracteven(int* arr, int size, int* new_arr) {
  int i = 0;
  int even[size + 1];
  int j = 0;
  while (i < size) {
    if (arr[i] % 2 == 0) {
      new_arr[j] = arr[i];
      j++;
    }
    i++;
  }
  new_arr[j] = -1;
}

void merge(int* arr1, int size1, int* arr2, int size2, int* new_arr) {
  int i = 0;
  while (i < size1) {
    new_arr[i] = arr1[i];
    i++;
  }
  int j = 0;
  while (j < size2) {
    new_arr[i] = arr2[j];
    i++;
    j++;
  }
}

void mergeSort(int* arr1, int size1, int* arr2, int size2, int* new_arr) {
  merge(arr1, size1, arr2, size2, new_arr);
  bsort(new_arr, size1 + size2);
}

void bsort(int *arr, int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void display(int* arr, int size) {
  int i = 0;
  while (i < size && arr[i] != -1) {
    cout << arr[i] << " ";
    i++;
  }
  cout << endl;
}
