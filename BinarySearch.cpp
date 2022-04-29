// Binary Search using C++

#include <iostream>
using namespace std;

int SearchwithBinary(int arr[], int a, int low, int high) {

	// Repeat until the pointers low and high meet with each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == a)
      return mid;

    if (arr[mid] < a)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int arr[] = {3, 4, 5, 6, 7, 8, 9};
  int a = 10;
  int n = sizeof(arr) / sizeof(arr[0]);
  int finalanswer = SearchwithBinary(arr, a, 0, n - 1);
  if (finalanswer == -1)
    printf("Element not found");
  else
    printf("Element is found at index %d", finalanswer);
}
