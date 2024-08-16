#include <iostream>
#include <vector>
using namespace std;
int opCount = 0;
int reCurCount = 0;
void merge(int arr[], int low, int mid, int hi)
{
  reCurCount++;
  vector<int> temp(hi - low + 1);             // for temp
  int left = low, right = mid + 1, index = 0; // for temp process

  while (left <= mid && right <= hi)
  {
    opCount++;
    if (arr[left] <= arr[right])
    {
      temp[index] = arr[left];
      left++;
      index++;
    }
    else
    {
      temp[index] = arr[right];
      right++;
      index++;
    }
  }
  // left array is not empty
  while (left <= mid)
  {
    opCount++;

    temp[index] = arr[left];
    left++;
    index++;
  }
  // right array is not empty
  while (right <= hi)
  {
    opCount++;

    temp[index] = arr[right];
    right++;
    index++;
  }
  // copy temp aray to present array
  index = 0;
  while (low <= hi)

  {
    opCount++;

    arr[low] = temp[index];
    low++;
    index++;
  }
}

void merge_sort(int arr[], int low, int hi)
{
  reCurCount++;

  if (low == hi)
    return;
  int mid = (low + hi) / 2;
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, hi);
  merge(arr, low, mid, hi);
}

int main()
{
  int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, -1};
  int low = 0;
  int hi = (sizeof(arr) / sizeof(int)) - 1;

  merge_sort(arr, low, hi);

  for (int ele : arr)
  {
    cout << ele << " ";
  }
  cout << endl
       << "Operation Count : " << opCount;
  cout << endl
       << "Recurion count : " << reCurCount;
}