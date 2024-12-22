// bitwise operator is which operator that'can perform task on binary form data
// all operation perform in binary form and answer is binary to decimal
#include <iostream>
using namespace std;

int main()
{
  int a = 5, b = 5;
  cout << (a & b); // And(&) bitwise operator
  cout << endl
       << (a | b); // Or(|) bitwise operator
  cout << endl
       << (a ^ b); // xor (xclusive or) if binary bits are same then answer is 0 other wise 1
  cout << endl
       << (a << 3); // left shift example : 1000 -> 10000
  cout << endl
       << (a >> 2); // right shift example : 1000 -> 100
}