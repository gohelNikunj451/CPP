#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 24, 65, 87, 93, 101};
    int n = sizeof(arr) / sizeof(int);
    int low = 0, hi = n - 1;
    int target = 93;
    int index = -1;
    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid] == target)
        {
            index = mid;
            break;
        }
        else if (arr[mid] > target)
            hi = mid - 1;
        else
            low = mid + 1;
    }
    cout << "The target index is : " << index;
}