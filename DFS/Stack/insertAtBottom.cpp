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
void inFromBottom(stack<int> &s)
{

  stack<int> s2;
  while (!s.empty())
  {
    s2.push(s.top());
    s.pop();
  }
  int x;
  cout << endl
       << "Ente the number you want to add bottom : ";
  cin >> x;
  s2.push(x);

  while (!s2.empty())
  {
    s.push(s2.top());
    s2.pop();
  }
  print(s);
}
int main()
{
  stack<int> s;
  s.push(5);
  s.push(10);
  print(s);
  s.push(100);
  print(s);
  inFromBottom(s);
}