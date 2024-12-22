#include <iostream>
#include <stack>
using namespace std;

int main()
{
  string pare;
  cout << "Enter the Parenthisis  ";
  cin >> pare;
  int count = 0;
  stack<int> s;
  for (int i = 0; i < pare.size(); i++)
  {
    if (pare[i] == '(')
    {
      s.push(pare[i]);
    }
    else // ) } ]
    {
      if (s.empty())
      {
        count++;
      }
      else
      {
        s.pop();
      }
    }
  }
  count += s.size();
  if (s.empty())
  {
    cout << endl
         << "Parenthisis is Valid ";
  }
  else
  {
    cout << endl
         << "Parenthisis is not valid" << endl
         << "Minimume add to make parenthisis to valid : " << count;
  }
}