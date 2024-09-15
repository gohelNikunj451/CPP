#include <iostream>
using namespace std;
class Complex;
class Calculate
{
public:
  int sum(Complex, Complex);
};
class Complex
{
  int a, b;

public:
  friend int Calculate::sum(Complex c1, Complex c2);
  Complex(int a, int b)
  {
    this->a = a;
    this->b = b;
  }
  void print()
  {
    cout << endl
         << "A : " << a << " B : " << b;
  }
};
int Calculate ::sum(Complex c1, Complex c2)
{
  int c3((c1.a + c2.a));
  return c3;
}

int main()
{
  Complex c1(1, 15);
  Complex c2(2, 15);
  c1.print();
  c2.print();
  Calculate c3;
  cout << endl
       << "Answer : " << c3.sum(c1, c2);
}