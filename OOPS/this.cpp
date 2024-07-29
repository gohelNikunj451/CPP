#include <iostream>
using namespace std;

class Cricketer
{
public:
    string name;
    int run;

    Cricketer(string name, int run)
    {
        this->name = name;
        this->run = run;
    }

    void showInfo()
    {
        cout << endl
             << "Name : " << name;
        cout << endl
             << "Run : " << run << endl;
    }
};

int main()
{
    Cricketer c1("Virat Kohli", 25000);

    c1.showInfo();
}
