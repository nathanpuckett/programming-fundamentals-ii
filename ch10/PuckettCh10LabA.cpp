/*
  Nathan Puckett
  Program Status - Complete

  Pointers
*/

// Including algorithm library for sort function
#include <iostream>
#include <algorithm>
using namespace std;

void sortArr(int arr[], int n)
{
  // Using sort function from algorithm library
  sort(arr, arr + n);
}

// Using pointer parameter
void printArr(int *arr, int n)
{
  // Loops through array using pointer reference
  for (int i = 0; i < n; i++)
  {
    cout << *(arr + i) << " ";
  }
  cout << "\n\n";
}

int findMedian(int *arr, int n)
{
  if (n % 2 == 0)
  {
    // If array has an even number of elements, return average of middle two elements
    return (*(arr + ((n / 2) - 1)) + *(arr + (n / 2))) / 2;
  }
  else
  {
    return (*(arr + (n / 2)));
  }
}

int main()
{
  int evenArr[10] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
  int oddArr[9] = {17, 32, 45, 68, 99, 101, 67, 89, 22};

  cout << "Median of the odd array:\n\n";
  sortArr(oddArr, 9);
  printArr(oddArr, 9);
  cout << "is " << findMedian(oddArr, 9) << "\n\n";

  cout << "Median of the even array:\n\n";
  sortArr(evenArr, 10);
  printArr(evenArr, 10);
  cout << "is " << findMedian(evenArr, 10) << "\n\n";

  return 0;
}