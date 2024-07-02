#include <iostream>
using namespace std;

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int a = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     if(i%2==0) a=0;
    //     else a=1;

    //     for (int j = 1; j <= i; j++)
    //     {

    //         cout<<a<<" ";

    //          if (a == 0)
    //             a = 1;
    //         else
    //             a = 0;
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}