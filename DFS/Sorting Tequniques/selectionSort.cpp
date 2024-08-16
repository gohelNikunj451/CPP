#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 1, 5, 9, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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