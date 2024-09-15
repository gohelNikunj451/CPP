#include <iostream>
using namespace std;
int sum(int a, int b)
{
  static int c = 0; // it execute only one time
  c = c + 1;        // next time is run,when value of c will be stored
  return a + b + c;
}
int main()
{
  int a, b;
  cout << "Enter the number A and B  : " << endl;
  cin >> a >> b;
  for (int i = 1; i <= 10; i++)
  {
    cout << endl
         << "The sum of A and B : " << sum(a, b);
  }
}