#include <iostream>
using namespace std;

class Vehical // parent class
{
public:
    int topSpeed;
    int milage;
    string fuel;
};
class TwoWheeler : public Vehical // child class of Vehical
{
};
class FourWheeler : public Vehical // child class of Vehical
{
};

class Bike : public TwoWheeler // grand child of TwoWheeler
{
    string color;
};
class Car : public FourWheeler // grand child of FourWheeler
{
    bool sunRoof;
};

int main()
{
    Car c;
    c.topSpeed = 200;
    cout << "Car top speed : "<<c.topSpeed;
}