#include <iostream>
using namespace std;

// example of polymorphisam

class FunctionLoading
{
public:
  void sum(int a, int b)
  {
    cout << a + b << endl;
  }
  void sum(int a, int b, int c)
  {
    cout << a + b + c << endl;
  }
  void sum(string a, string b) // differebt data type of parameters are aloud like same as other function
  {
    cout << a + b << endl;
  }
  // int sum(int a, int b){
  //   return a + b; // different data type function is not aloud in same argument like other function
  // }
};

int main()
{
  FunctionLoading fl;
  fl.sum(5, 5);
  fl.sum(5, 5, 5);
  fl.sum("Nikunj  ", "Gohel");
}