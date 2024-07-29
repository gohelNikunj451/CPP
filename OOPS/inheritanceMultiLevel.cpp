#include <iostream>
using namespace std;

class Cricketer // parent class
{
public:
    string name;
    int run;
    int wicket;
    float avrage;
};
class Engineer // parent class
{
public:
    int experience;
    string domain;
};
class Phodu : public Cricketer, public Engineer // multiple inheritance class
{
public:
    int age;
};

int main()
{
    Phodu p;
    p.domain = "Android Devlopment";
    p.run = 3234;
}