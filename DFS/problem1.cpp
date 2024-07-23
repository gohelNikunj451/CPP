#include <iostream>
#include <algorithm>
using namespace std;

int main() // the consept of bubble sort
{
    int arr[9] = {5, 0, 2, 0, 0, 3, 4, 0, 1};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] == 0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Element sorted : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}