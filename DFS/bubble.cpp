#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 26, 4, 3, 9};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++) // number of pass
    {
        bool flag = true;
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - i; j++)
        {
            if (arr[j] > arr[j + 1]) //if condition is true then swap value of j and j+1 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag = false;
            }
        }
        if (flag) // for already sorted array
            break;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
}

// best case : o(n)
// Avg. case : o(n power of 2)
// worst case : o(n power of 2)
// bubble sort is stable sort example:
// unsorted arr=[1,4,5,3,5*]
// sorted arr=[1,3,4,5,5*]