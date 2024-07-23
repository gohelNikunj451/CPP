#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 5};

    int low = 0;
    int hi = sizeof(arr) / sizeof(int) - 1;
    int missing = sizeof(arr) / sizeof(int);

    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid] == mid) // if index equal to index value
        {
            low = mid + 1;
        }
        else // if index does not equal to index value
        {
            missing = mid;
            hi = mid - 1;
        }
    }
    cout << "missing Number : " << missing;
}