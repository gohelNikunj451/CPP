#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {5, 32, 85, 4, 2, 7, 1};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        while (j >= 1 and arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}