#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int roll_no;
    float cgpa;
};

void print(student s)
{
    cout << endl
         << "Name : " << s.name << endl
         << "Roll no. : " << s.roll_no << endl
         << "CGPA : " << s.cgpa << endl;
}

int main()
{
    student s1;
    s1.name = "nikunj";
    s1.roll_no = 23;
    s1.cgpa = 8.8;

    student s2;
    s2.name = "nikunj";
    s2.roll_no = 23;
    s2.cgpa = 8.8;

    print(s1);
    print(s2);
}