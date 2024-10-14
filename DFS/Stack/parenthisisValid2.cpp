#include <iostream>
#include <stack>
using namespace std;
bool checkValid(string str)
{
  stack<char> s;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == '(')
    {
      s.push(str[i]);
    }
    else
    {
      if (s.empty())
      {
        return 0;
      }
      else
      {
        s.pop();
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
         << "parenthisis is valid ";
  }
  else
  {
    cout << endl
         << "parenthisis is not valid";
  }
}