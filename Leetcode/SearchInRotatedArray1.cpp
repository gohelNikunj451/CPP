#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 9, 10, 11, 1, 2, 3, 4, 5, 6, 7};

    int target;
    cout << "Enter the target : ";
    cin >> target;

    int ans = -1;

    int low = 0;
    int hi = sizeof(arr) / sizeof(int) - 1;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[low] <= arr[mid]) // check left part is sorted or not
        {
            if (target >= arr[low] and target <= arr[mid]) // if left part is sorted then check target lies in left sorted part
            {
                hi = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else // if right part is sorted
        {
            if (target >= arr[mid] and target <= arr[hi]) // if right part is sorted then check target lies in right sorted part
            {
                low = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }
    cout << endl
         << "Element present at " << ans << " index";
}