#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  int currSum = 0;
  int maxSum = INT32_MIN;
  for (int i = 0; i < size; i++)
  {
    currSum += arr[i];
    maxSum = max(currSum, maxSum);
    if (currSum < 0)
    {
      currSum = 0;
    }
  }
  cout << endl
       << "Max sum 