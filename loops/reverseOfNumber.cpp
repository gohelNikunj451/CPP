#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ld=0,rev=0;

    while (n != 0)
    {
        ld = n % 10;
        rev = (rev*10)+ld;
        n/=10;
    }
    cout<<"the reverse number is : "<<rev;
}