#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 6, 8, 4, 12, 5};
    bool flag = false;
    int index = 0;
    int x;

    cout << endl
         << "Enter the element you want : ";
    cin >> x;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (x == arr[i])
        {
            flag = true;
            index = i;
            break;
        }
    }
    if (flag)
    {
        cout << endl
             << x << " element in present " << index << " index of arr";
    }
    else
    {
        cout << endl
             << x << " is no present in any index of arr ";
    }
}