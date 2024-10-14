#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
  int arr[] = {3, 5, 2, 6, 1, 8, 2, 2, 9};
  vector<int> ans(sizeof(arr) / sizeof(int), -1);
  stack<int> s;

  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    while (!s.empty() and arr[s.top()] < arr[i])
    {
      ans[s.top()] = arr[i];
      s.pop();
    }
    s.push(i);
  }
  for (int vel : ans)
  {
    cout << " " << vel;
  }
}