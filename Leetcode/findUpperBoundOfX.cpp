#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 10};
    int target, index = -1;

    cout << "Enter the target : ";
    cin >> target;

    int low = 0;
    int hi = sizeof(arr) / sizeof(int) - 1;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid] > target)
        {
            hi = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            cout << "hello";
            index = mid;
            break;
        }
    }
    if (index == -1)
    {
        cout << endl
             << "The " << target << " is not present in array ";
    }
    else
    {
        cout << endl
             << "The " << target << " is present in array at " << index << " index";
        cout << endl
             << "Upper bound of target is : " << arr[index + 1];
    }
}