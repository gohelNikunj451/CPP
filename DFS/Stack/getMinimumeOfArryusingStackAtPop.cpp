#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
  stack<int> s;
  vector<int> arr = {3, 2, 1, 3, 0, 5, 0};
  for (int i = 0; i < arr.size(); i++)
  {
    if (s.empty())
      s.push(arr[i]);
    else
    {
      if (s.top() > arr[i])
      {
        s.push(arr[i]);
      }
      else
      {
        s.push(s.top());
      }
    }
  }
  cout << endl
       << "Minimume Of array using stack at pop : ";
  for (int i = 0; i < arr.size(); i++)
  {
    arr[i] = s.top();
    s.pop();
  }
  for (int val : arr)
  {
    cout << " " << val;
  }
}