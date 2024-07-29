#include <iostream>
#include <string>
using namespace std;

class teacher // class declaration
{
public:          // access modifier
    string name; // data member
    string dept;

private: // access modifier
    int salary;

    void setSalary(int s)
    {
        salary = s;
    }
};

int main()
{
    teacher t1; // object
    cout << "Enter teacher name : ";
    cin >> t1.name; // access data member
    cout << endl
         << "Enter department :  ";
    cin >> t1.dept;
    // cout << endl
    //      << "Enter the salary : ";
    // cin >> t1.salary;

    cout << endl
         << "teacher name : " << t1.name << endl
         << "Departmant : " << t1.dept << endl;
}