#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i <= 99; i++)
    {
        arr[i] = i;
    }
    arr[18] = 0;

    for (int i = 0; i <= 99; i++)
    {
        sum1 += arr[i];
    }

    sum2 = (99 * (99 + 1)) / 2;
    // n(n+1)/2

    cout << endl
         << "Missing frequencu is : " << sum2 - sum1;
}