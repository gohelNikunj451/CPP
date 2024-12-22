#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollNo;
    float cgpa;

    student()
    { // default constructor if we don't write complier through the error ( no matching constructor )
    }
    student(string n, int r, float c) // parameterized constructor
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    // void getInfo()
    // {
    //     cout << endl
    //          << "Enter name : ";
    //     cin >> name;

    //     cout << endl
    //          << "Enter the roll no. : ";
    //     cin >> rollNo;

    //     cout << endl
    //          << "Enter CGPA : ";
    //     cin >> cgpa;
    // }
    void showInfo()
    {
        cout << endl
             << "Name : " << name;
        cout << endl
             << "Roll NO : " << rollNo;
        cout << endl
             << "CGPA : " << cgpa << endl;
    }
};

int main()
{
    student s1("nikunj", 74, 8);
    student s2;

    s2.name = "rahul";
    s2.rollNo = 86;
    s2.cgpa = 9;
    // s1.getInfo();

    s1.showInfo();
    s2.showInfo();

    student s3 = s1; // deep copy
    s3.cgpa = 1;
    s3.showInfo();

    student s4(s1); // copy constructor - deep copy //default copy constructor
    s4.cgpa = 5;
    s3.showInfo();
    s4.showInfo();
}