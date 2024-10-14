#include <iostream>
using namespace std;

int main()
{
    int a[5];

    int i = 0;
    int p = 0;
    int temp = 0;

    while (i < (sizeof(a) / sizeof(int)))
    {
        cout << endl
             << "enter the " << i << " : ";
        cin >> a[i];

        temp = a[i];
        p = i - 1;

        while (temp < a[p] && p >= 0)
        {
            a[p + 1] = a[p];
            a[p] = temp;
            p--;
        }
        i++;
    }
    cout << endl
         << "Array all element : ";
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    {
        cout << a[i] << " ";
    }
}