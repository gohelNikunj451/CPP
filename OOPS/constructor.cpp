#include <iostream>
#include <string>
using namespace std;

class teacher
{
public:
    string name;
    string dept;
    double salary;

    void getInfo()
    {
        cout << "\n Name : " << name;
        cout << "\n DepartMant : " << dept;
        cout << "\n Salary : " << salary;
    }
    teacher() // non-paramitersized constructor
    {
        cout << "hello I am nikunj gohel nice to meet you ";
    }
    teacher(string name, string dept, double salary) // constructor : paramitersized constructor
    {
        this->name = name; // this-> means *this.name , this point to object
        this->dept = dept;
        this->salary = salary;
    }
    teacher(teacher &OrgObj){ //custom copy constructor
        cout << "hello I am custom copy constructor";
        this->name = OrgObj.name;
        this->dept = OrgObj.dept;
        this->salary = OrgObj.salary;
    }
};

int main()
{
    teacher t1("nikunj", "1A", 50000); // object
    teacher t2(t1);//default copy constructor -invoke 
    t2.getInfo();
}