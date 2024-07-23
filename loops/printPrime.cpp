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

    for (int i = 2; i < 10; i++)
    {
        if (primeOrNot(i))
        {
            cout << i << " ";
        }
    }
}