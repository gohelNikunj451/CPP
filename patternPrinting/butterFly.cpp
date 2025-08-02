#include <iostream>
using namespace std;
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
int main()
{
  int n;
  cout << "Enter no : ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {

    for (int j = 1; j <= i; j++)
    {

      cout << "*";
    }
    for (int s = 1; s <= 2 * (n - i); s++)
    {
      cout << " ";
    }
    for (int k = 1; k <= i; k++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n; i >= 1; i--)
  {

    for (int j = i; j >= 1; j--)
    {

      cout << "*";
    }
    for (int s = 2 * (n - i); s >= 1; s--)
    {
      cout << " ";
    }
    for (int k = i; k >= 1; k--)
    {
      cout << "*";
    }
    cout << endl;
  }
}