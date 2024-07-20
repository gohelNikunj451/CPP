#include <iostream>
using namespace std;

int sum(int a, int b) // formal parameters
{
    return a < b;
}
int main()
{
    cout << sum(5, 10); // actual parameters
}
