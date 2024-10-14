#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> s)
{
  cout << endl
       << "Data : ";
  while (!s.empty())
  {
    cout << " " << s.top();
    s.pop();
  }
}

int main()
{
  stack<int> s;
  int arr[] = {2, 3, 5, -4, 6, -2, -8, 9};
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
  {
    if (s.empty()) // if stack is empty then first add push first value
    {
      s.push(arr[i]);
    }
    else if (arr[i] >= 0) // if arr value is positive
    {
      if (s.top() >= 0) // if stack value is also positive
      {
        s.push(arr[i]);
      }
      else // if stack value is negative
      {
        s.pop();
      }
    }
    else // if array value is negative
    {
      s.pop();
    }
  }
  print(s);
}