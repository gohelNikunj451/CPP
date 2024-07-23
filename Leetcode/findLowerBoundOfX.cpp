#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 8};

    int target, index;
    bool flag = false;

    cout << "Enter target : ";
    cin >> target;

    int low = 0, hi = sizeof(arr) / sizeof(int) - 1;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] > target)
            hi = mid - 1;
        else
        {

            index = mid;
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << endl
             << "Element present at index : " << index;
    }
    else
    {
        cout << endl
             << "lower Bound is at index : " << low;
    }
}