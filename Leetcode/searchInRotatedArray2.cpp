#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8, 9, 10, 1, 2, 3, 4, 5, 6, 7};

    int low = 0;
    int hi = sizeof(arr) / sizeof(int);

    int ans;

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid] < hi)
            hi = mid - 1;
        else if (arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1])
        {
            ans = mid;
            break;
        }

        else
            low = mid + 1;
    }
    cout << "Peak Element " << arr[ans]<<" at index "<<ans;
}