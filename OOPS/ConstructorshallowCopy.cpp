#include <iostream>
using namespace std;
class Student
{
public:
  string name;
  int *rollNoPtr;
  Student(string name, int rollNo) // simple constructor
  {
    this->name = name;
    rollNoPtr = new int;
    *rollNoPtr = rollNo;
  }
  Student(Student &obj) // shallow copy constructor, which can  not give you new memory in heep in dynamic allocation, if you change one value then that affect all value and change all
  {
    this->name = obj.name;
    this->rollNoPtr = obj.rollNoPtr;
  }
  // Student(Student &obj) // deep copy constructor , which can give you new memory in heep of dynamic allocation , if you change one value but not affect to other value
  // {
  //   this->name = obj.name;
  //   rollNoPtr = new int((*obj.rollNoPtr)); // new memory allocation and set value of other object value
  // }

  void getInfo()
  {
    cout << endl
         << "Name : " << name;
         

    cout << endl
         << "Roll No : " << *rollNoPtr;
  }
};
int main()
{
  Student s1("NikunjKumar", 1);
  s1.getInfo();

  Student s2(s1);
  *(s2.rollNoPtr) = 99;
  s1.getInfo();

  s2.getInfo();
}