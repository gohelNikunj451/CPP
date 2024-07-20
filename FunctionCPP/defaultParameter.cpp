#include <iostream>
using namespace std;

int sum(int x, int y,int z=3)//we give default value and after that argument we must be give all argument to default value and either or  compiler throw the error
{
    return x + y + z;
}

int main()
{
   cout<< sum(1, 2);
}