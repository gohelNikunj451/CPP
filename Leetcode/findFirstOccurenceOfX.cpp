#include <iostream>
using namespace std;

//first occurence means target element starting position

int main()
{
    int arr[] = {2, 2, 2, 5, 5, 5, 5, 9};
    int low = 0;
    int hi = (sizeof(arr) / sizeof(int)) - 1;
    int target, index = -1;
    cout << "Enter target : ";
    cin >> target;

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
        else // arr[mid]==target
        {
            if (mid > 0 and arr[mid] == arr[mid - 1]) // observed of current mid value's previus value is equla to current mid value for find first occurence
            {
                hi = mid - 1; // if we find last occurence : low = mid +1 and condition : arr[mid]==arr[mid+1]
            }
            else
            {
                index = mid;

                break;
            }
        }
    }

    cout << endl
         << "First Ourencce of X : " << index;
}