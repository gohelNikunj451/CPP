#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  int subMax = INT32_MIN;

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
  for (int st = 0; st < size; st++)
  {
    int currSum = 0;
    for (int end = st; end < size; end++)
    {
      currSum += arr[end];
      subMax = max(currSum, subMax);
    }
  }
  cout << endl
       << "Sub max is : " << subMax;
}