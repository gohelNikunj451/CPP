#include <iostream>
using namespace std;

int main()
{
    int n;
    bool flag = true;
    cin >> n;

    for (int i = n / 2; i >= 2; i--)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        cout << "The number is prime";
    else
        cout << "The number is composite";
}