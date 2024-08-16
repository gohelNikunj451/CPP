#include <iostream>
#include <algorithm>
using namespace std;
int opCount = 0;
int partition(int arr[], int start, int end)
{
  int pos = start;
  for (int i = start; i <= end; i++)
  {
    opCount++;
    if (arr[i] <= arr[end])
    {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  return pos - 1;
}
void quick_sort(int arr[], int start, int end)
{
  if (start >= end)
    return;
  int pivot = partition(arr, start, end);
  quick_sort(arr, start, pivot - 1);
  quick_sort(arr, pivot, end);
}

int main()
{
  int arr[] = {10,9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
  int start = 0;
  int end = sizeof(arr) / sizeof(int) - 1;

  quick_sort(arr, start, end);

  for (int ele : arr)
  {
    cout << ele << " ";
  }

  cout << endl
       << "Opretion count : " << opCount;
}