#include <iostream>
using namespace std;

// single level inheritance

class Vehical // parent class
{
public:
    int topSpeed;
    int milage;
    string fuel;
};
class Car : public Vehical // child class / derived class
{
    int bootSpace;
};
class Truck : public Vehical // child class / derived class
{
    int capableTon;
};
class Bike : public Vehical // child class / derived class
{
    int gear;
};
int main()
{
}