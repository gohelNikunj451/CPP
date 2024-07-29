#include <iostream>
using namespace std;

class Scooty // parent class
{
public:
    int topSpeed;
    int milage;

protected: // protected shere with derived class 
    int manuFacturePrice;
};
class Bike : public Scooty // childe class && derived class
{
public:
    int gear;
};

int main()
{
    Bike b;
    b.gear = 4;
    b.topSpeed = 70;
    b.milage = 30;
    cout << "Information of Bike : " << endl;
    cout << "Top speed : " << b.topSpeed;
    cout << endl
         << "Milage : " << b.milage;
    cout << endl
         << "Gear : " << b.gear;
}