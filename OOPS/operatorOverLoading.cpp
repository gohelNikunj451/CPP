#include <iostream>
using namespace std;
class Complex
{
  int real, img;

public:
  Complex()
  {
  }
  Complex(int real, int img)
  {
    this->real = real;
    this->img = img;
  }
  Complex operator+(Complex &C)
  {
    Complex C3;
    cout << endl
         << "Real : " << real;
    C3.real = this->real + C.real;
    C3.img = this->img + C.img;
    return C3;
  }
  void showInfo()
  {
    cout << endl
         << real << " + i" << img;
  }
};
int main()
{
  Complex C1(522, 10);
  C1.showInfo();
  Complex C2(5, 10);
  C2.showInfo();
  Complex C3 = C1 + C2; // in simple perspective view : c3=c1.add(c2) in simple words write + operator insted of .add
  C3.showInfo();
}