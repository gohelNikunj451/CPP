#include <iostream>
using namespace std;

// 10 11 12 13 14
// 6 7 8 9
// 3 4 5
// 1 2
// 0

int main()
{
  int n;
  cout << "Enter N: ";
  cin >> n;
  int p = n;
  int r = 0;
  for (int i = 1; i <= n; i++)
  {
    r += i;
  }
  for (int i = 1; i <= n; i++)
  {
    p--;
    r = r - p - 1;
    for (int j = r; j <= r + p; j++)
    {
      cout << " " << j;
    }
    cout << endl;
  }
}