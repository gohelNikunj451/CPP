// in this program we can assume the sign of '#' is command of bakcspace and then compare two string after backspace process
#include <iostream>
#include <stack>
using namespace std;
stack<char> genStack(string str)
{
  stack<char> s;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == '#')
    {
      if (!s.empty())
        s.pop();
    }
    else
    {
      s.push(str[i]);
    }
  }
  return s;
}
bool checkStack(stack<char> s1, stack<char> s2)
{
  if (s1.size() != s2.size())
    return false;
  while (!s1.empty() and !s2.empty())
  {
    if (s1.top() != s2.top())
      return false;
    s1.pop();
    s2.pop();
  }
  return true;
}
int main()
{
  string str1;
  string str2;
  cout << "Enter First String : ";
  cin >> str1;
  cout << endl
       << "Enter Second String : ";
  cin >> str2;
  stack<char> s1 = genStack(str1);
  stack<char> s2 = genStack(str2);

  if (checkStack(s1, s2))
  {
    cout << endl
         << "String are same ";
  }
  else
  {
    cout << endl
         << "String are not same ";
  }
}