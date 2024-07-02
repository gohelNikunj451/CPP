#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n/2; i >= 2; i--)
    {
        if (n % i == 0)
        {
            cout << "the highest factor of n : " <<i << endl;
            break;
        }
    }
}