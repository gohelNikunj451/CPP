#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  char name[20];
  cout << "Enter name : ";
  cin.setf(ios::skipws);
  cin >> name;
  cout << endl
       << "name : " << name;
}