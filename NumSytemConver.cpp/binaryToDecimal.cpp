#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i = 0, sum = 0;

    cout << "Enter the binary number : ";
    cin >> n;

    while (n != 0)
    {

        sum += (n % 10) * pow(2, i);

        n /= 10;
        i++;
    }
    cout << endl
         << "Decimal number is : " << sum;
}