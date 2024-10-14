#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int arr[] = {3, 5, 2, 6, 1, 8, 2, 2, 9};
  vector<int> ans(sizeof(arr) / sizeof(int), -1);
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++)
    {
      if (arr[i] < arr[j])
      {
        ans[i] = arr[j];
        break;
      }
    }
  }
  for (int vel : ans)
  {
    cout << " " << vel;
  }
}