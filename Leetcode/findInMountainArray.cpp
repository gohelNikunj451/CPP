#include <iostream>
using namespace std;

// moutain array means starting increasing and ending decreacing like 1,2,3,4,5,3,2,1

int main()
{
    int arr[] = {1, 5, 9, 3, 2, 1};
    int low = 1;                            // peak is always greater than one
    int hi = sizeof(arr) / sizeof(int) - 2; // peak is alway less than n
    int peak;
    while (low <= hi)
    {
        int mid = (low + hi) / 2;

        if (arr[mid - 1] < arr[mid] and arr[mid] < arr[mid + 1])
        {
            low = mid + 1;
        }
        else if (arr[mid - 1] > arr[mid] and arr[mid] > arr[mid + 1])
        {
            hi = mid - 1;
        }
        else
        {
            peak = arr[mid];
            break;
        }
    }

    cout << "The Peak of mountain array : " << peak;
}