#include <iostream>
using namespace std;
class Complex
{
  int a, b;

public:
  friend Complex sum(Complex c1, Complex c2);
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
Complex sum(Complex c1, Complex c2)
{
  Complex c3((c1.a + c2.a), (c1.b + c2.b));
  return c3;
}
int main()
{
  Complex c1(5, 5);
  c1.print();
  Complex c2(10, 10);
  c2.print();
  Complex c3 = sum(c1, c2);
  c3.print();
}