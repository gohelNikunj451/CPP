#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5], c[10];
    cout << "A Array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Enter the " << i << " : ";
        cin >> a[i];
    }
    cout << endl
         << "B Array :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Enter the " << i << " : ";
        cin >> b[i];
    }
}