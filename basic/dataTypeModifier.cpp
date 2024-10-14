#include <iostream>
using namespace std;

int main()
{
  cout << " int " << (sizeof(int));
  cout << endl
       << " long int " << (sizeof(long int));
  cout << endl
       << "short int " << (sizeof(short int));
  cout << endl
       << "long long " << (sizeof(long long int));
  cout << endl
       << "signed int " << sizeof(signed int); // all types of number probably positive and negative
  cout << endl
       << "unsigned int " << (sizeof(unsigned int)); // only for positive number
}