#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 3, 3, 3, 3, 2, 3, 3, 2, 1, 1, 3, 3, 3, 1};
  sort(arr.begin(), arr.end());
  cout << endl;
  for (int val : arr)
  {
    cout << " " << val;
  }
  int frq = 1;
  int ans;
  for (int i = 1; i < arr.size(); i++)
  {
    if (arr[i] == arr[i - 1])
    {
      frq++;
      ans = arr[i];
    }
    else
    {
      frq = 1;
    }
    if (frq > (arr.size() / 2))
    {
      cout << endl
           << "Mejyority Element : " << arr[i];
      break;
    }
  }
}