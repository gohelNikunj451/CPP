#include <iostream>
#include <stack>
using namespace std;
bool checkValid(string str)
{
  stack<char> s;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == '(' or str[i] == '{' or str[i] == '[')
    {
      s.push(str[i]);
    }
    else
    {
      if (s.empty())
      {
        return 0;
      }
      else if (str[i] == ')')
      {
        if (s.top() == '(')
        {
          s.pop();
        }
        else
        {
          return 0;
        }
      }
      else if (str[i] == ']')
      {
        if (s.top() == '[')
        {
          s.pop();
        }
        else
        {
          return 0;
        }
      }
      else if (str[i] == '}')
      {
        if (s.top() == '{')
        {
          s.pop();
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return s.empty();
}
int main()
{
  string str;
  cout << "Enter the parenthisis : ";
  cin >> str;
  if (checkValid(str))
  {
    cout << endl
         << "Parenthisis is valid ";
  }
  else
  {
    cout << endl
         << "Parenthisis is not valid";
  }
}
