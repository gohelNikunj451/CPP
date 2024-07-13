#include <iostream>
using namespace std;

int main()
{
    int n, ld = 0, ans = 0, pow = 1;

    cout << "Enter the decimal number : ";
    cin >> n;

    while (n != 0)
    {
        ld = n % 2; // parityDigit

        ans += ld * pow;
        pow *= 10;
        n /= 2;
    }
    cout << endl
         << "The Binary number is : "
         << ans;
}
