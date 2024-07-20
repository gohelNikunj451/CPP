#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5;
    int y = 10;

    cout << "Before swap : ";
    cout << endl
         << "x : " << x << " y : " << y;

    swap(x, y);
    cout << endl
         << "After swap : ";
    cout << endl
         << "x : " << x << " y : " << y;
}