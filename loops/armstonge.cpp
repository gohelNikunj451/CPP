#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  int ld, power, sum = 0;
  for (int i = n; i > 0; i /= 10)
  {
    ld = i % 10; // for find last digit power
    power = 1;
    for (int j = n; j > 0; j /= 10)
    {
      power = power * ld; // find power as size fo number
    }
    sum = sum + power; // find final number
  }
  if (n == sum)
  {
    cout << "The number is paindrome ";
  }
  else
  {
    cout << "The number is not paindrome";
  }
}