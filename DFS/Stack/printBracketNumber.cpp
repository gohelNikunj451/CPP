#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
  string str;
  int count = 0;
  vector<int> ans;
  stack<int> s;
  cout << "Enter the string : ";
  cin >> str;

  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == '(')
    {
      count++;
      s.push(count);
      ans.push_back(s.top());
    }
    else if (str[i] == ')')
    {
      ans.push_back(s.top());
      s.pop();
    }
  }

  cout << endl
       << "Number of bracket : ";
  for (int vel : ans)
  {
    cout << " " << vel;
  }
}