#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter no. : ";
  cin >> n;
  int i = 1;
  int a, b, sum;
  a = 0, b = 1, sum = 0;
  cout << "Finonacci : ";
  while (i <= n)
  {
    cout << sum << " ";
    sum = a + b;
    a = b;
    b = sum;
    i++;
  }
}