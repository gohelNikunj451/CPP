#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 6, 3, 1, 7, 4};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT32_MAX;
        int mindex = -1;
        for (int j = i; j < n; j++)
        {
            if (min > arr[j])
            {
                min = arr[j]; // last sallest value of arr[j] iteration
                mindex = j;   // last smallest value index of arr[j] iteration
            }
        }
        swap(arr[i], arr[mindex]); // small value fix in it's specific position and swap thse two value
    }
    cout << "Sorted Array : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// best case : O(n2)
// Avg. case : O(n2)
// worst case : O(n2)

// that's reason why bubble sort is faster than selection sort