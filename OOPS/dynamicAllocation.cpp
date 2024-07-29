#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollNo;
    float gpa;

    student(string name, int rollNo, float gpa)
    {
        this->name = name;
        this->rollNo - rollNo;
        this->gpa = gpa;
    }
    void getInfo()
    {
        cout << endl
             << "Name : " << name;
        cout << endl
             << "Roll No : " << rollNo;
        cout << endl
             << "GPA : " << gpa << endl;
    }
};

int main()
{
    student s1("Gohel Nikunj", 94, 8);

    s1.getInfo();

    int *ptr = new int(3434); // create pointer variable and that can store random address and put the value as we give and variable name is not defined
    cout << *ptr;

    student *s2 = new student("Solanki Rahul", 84, 9);

    s2->getInfo();
}