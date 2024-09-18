#include <iostream>
using namespace std;

class Scooty
{
public:
  int topSpeed;
  int milage;
  string fual;

  virtual void sound() // if we remove virtual keyword then give the output default Scooty Sound;
  {
    cout << endl
         << "Vroom Vroom";
  }
};
class Bike : public Scooty
{
public:
  int gear;
  void sound()
  {
    cout << endl
         << "Dhroom Dhroom";
  }
};
class SuperBike : public Scooty
{
public:
  int gear;
  void sound()
  {
    cout << endl
         << "Zroom Zroom";
  }
};

int main()
{
  Scooty *s1 = new Bike();
  s1->sound();
  Scooty *s2 = new SuperBike();
  s2->sound();
  
}