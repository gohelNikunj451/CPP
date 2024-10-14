#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int Size(char str[])
{
  int size = 0;
  while (str[size] != '\0')
  {
    size++;
  }
  return size;
}
int main()
{
  stack<char> s;
  char str[20];
  cout << "Enter parenthisis : ";
  cin >> str;
  int size = Size(str);

  for (int i = 0; i < size; i++)
  {
    if (s.empty())
    {
      s.push(str[i]);
    }
    else if (s.top() != str[i])
    {
      s.pop();
    }
    else
    {
      s.push(str[i]);
    }
  }
  if (s.empty())
  {
    cout << endl
         << "Parenthisis is valid : ";
  }
  else
  {
    cout << endl
         << "Parenthisis is Not valid";
  }
}