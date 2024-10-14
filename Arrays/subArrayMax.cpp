#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);
  int subMax = INT32_MIN;
  int maxIndex;
  for (int st = 0; st < size; st++)
  {
    for (int end = st; end < size; end++)
    {
      int sum = 0;
      for (int pr = st; pr <= end; pr++)
      {
        cout << arr[pr];
        sum += arr[pr];
      }
      cout << " ";
      if (sum > subMax)
      {
        subMax = sum;
        maxIndex = end;
      }
    }
    cout << endl;
  }
  cout << endl
       << "Maximume sub array : " << subMax<<" At "<<maxIndex+1;
}