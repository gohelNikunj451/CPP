#include <iostream>
using namespace std;

bool primeOrNot(int n)
{
    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{

    // for (int i = 2; i < 10; i++)
    // {
    //     if (primeOrNot(i))
    //     {
    //         cout << i << " ";
    //     }
    // }
    int i = 0;
    int n;
    cout << "Enter the N : ";
    cin >> n;
    while (i <= n)
    {
        int j = i, k = 2, flag = 0;
        while (k < j)
        {
            if (j % k == 0)
            {
                flag = 1;
                break;
            }
            k++;
        }
        if (!flag)
        {
            cout << i << " ";
        }
        i++;
    }
}