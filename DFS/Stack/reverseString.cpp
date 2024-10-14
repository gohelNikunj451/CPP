#include <iostream>
#include <stack>
using namespace std;
void reverse(char str[])
{
  stack<char> s;

  for (int i = 0; str[i] != '\0'; i++)
  {
    s.push(str[i]);
  }

  for (int i = 0; !s.empty(); i++)
  {
    str[i] = s.top();
    s.pop();
  }
}
int main()
{
  char name[20];
  cout << "Enter you name : ";
  cin >> name;
  reverse(name);
  cout << endl
       << "Your reversed Name : " << name;
}