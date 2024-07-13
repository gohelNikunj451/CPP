#include <iostream>
using namespace std;

// 1 2 3 4 5 6 7 
// 2 3 4 5 6 7 1 
// 3 4 5 6 7 1 2 
// 4 5 6 7 1 2 3 
// 5 6 7 1 2 3 4 
// 6 7 1 2 3 4 5 
// 7 1 2 3 4 5 6

int main()
{
    int n, a;

    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a = i;
        for (int j = 1; j <= n; j++)
        {
            if (a > n)
                a = 1;
            cout << a << " ";

            a++;
        }
        cout << endl;
    }
}
