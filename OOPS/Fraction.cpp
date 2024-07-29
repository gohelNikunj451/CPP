#include <iostream>
using namespace std;

class Fraction
{
public:
  int num;
  int den;

  Fraction(int num, int den)
  {
    this->num = num;
    this->den = den;
  }
  void display()
  {
    cout << num << " / " << den << endl;
  }
  Fraction operator+(Fraction f)
  {
    int newNum = f.den * this->num + this->den * f.num;
    int newDen = this->den * f.den;

    Fraction ans(newNum, newDen);
    return ans;
  }
  Fraction operator-(Fraction f)
  {
    int newNum = f.den * this->num - this->den * f.num;
    int newDen = this->den * f.den;

    Fraction ans(newNum, newDen);
    return ans;
  }
  Fraction operator*(Fraction f)
  {
    int newNum = this->num * f.num;
    int newDen = this->den * f.den;

    Fraction ans(newNum, newDen);
    return ans;
  }
  
};

int main()
{
  Fraction f1(1, 2);
  f1.display();
  Fraction f2(4, 2);
  f2.display();

  // Fraction f3 = f1.add(f2);

  Fraction f3 = f1 + f2;
  Fraction f4 = f1 - f2;
  Fraction f5 = f1 * f2;

  f3.display();
  f4.display();
  f5.display();
}