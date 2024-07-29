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
        this->rollNo = rollNo;
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
void changeVal(student *s)
{
    s->rollNo = 86;
}
int main()
{
    student s1("Gohel Nikunj", 94, 8);
    s1.getInfo();

    student *p1 = &s1; // pointer of object

    p1->name = "rahul"; // change value with help of pointers

    p1->getInfo();

    changeVal(&s1);

    p1->getInfo();
}