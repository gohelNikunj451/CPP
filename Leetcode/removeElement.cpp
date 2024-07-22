#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 2, 7, 5, 3, 5};
    int val = 5;
    int n = sizeof(arr) / sizeof(int);

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != val)
            k++;
    }
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] == val)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Remove element array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Without duplicate element array length: " << k;
}