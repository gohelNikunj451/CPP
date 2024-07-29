#include <iostream>
using namespace std;

class adharCard
{
public:
    string name;
    int age;
    adharCard()
    {
    }
    adharCard(string name, int age, int adharNum)
    {
        this->name = name;
        this->age = age;
        this->adharNum = adharNum;
    }
    void getFun()
    {
        cout << adharNum;
    }
    int getAdharNum() // getter Function
    {
        return adharNum;
    }
    void setAdharNum(int an) // setter Function
    {
        adharNum = an;
    }

private:
    int adharNum;
};

int main()
{
    adharCard p("Nikunj", 18, 45623); // constructor is call only one time
    // p.name = " NIkunj";
    // p.age = 40;
    // p.adharNum = 4554;  //data not accessable out of class

    cout << p.name << " " << p.age << endl;

    // p.getFun();// data accesee with help of inner getter function of class

    cout << "Adhar Number : " << p.getAdharNum(); // call getter function

    p.setAdharNum(4524); // call setter function

    cout << endl
         << "Adhar number : " << p.getAdharNum(); // afger set value and again call getter funciton
}