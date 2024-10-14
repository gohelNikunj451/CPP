#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, -3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  int currSum = 0;
  int maxSum = INT32_MIN;
  for (int i = 0; i < size; i++) //  point to start
  {
    for (int j = i; j < size; j++) // point to end
    {
      cout << "[ ";
      for (int k = i; k <= j; k++) // print start to end that's means i->j itreate
      {
        cout << arr[k] << " ";
      }
      cout << "]" << " ";
    }
    cout << endl;
  }
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
       << "Max sum of Sub Array : " << maxSum;
}