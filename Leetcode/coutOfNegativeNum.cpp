#include <iostream>
using namespace std;

int main()
{
    int arr[5][5] = {{1, -2, -2, -3, -5}, {1, 0, -3, -6, -9}, {1, 0, -4, -9, -10}, {5, 4, 3, 2, 1}, {-1, -2, -3, -4, -5}};
    int n = sizeof(arr[0]) / sizeof(int);

    int low = 0;
    int hi = n - 1;
    int i = 0;
    int count = 0;
    int opCount = 0;

    while (low <= hi and i < n)
    {
        int mid = (low + hi) / 2;

        if (arr[i][mid] > 0 or arr[i][mid] == 0)
            low = mid + 1;
        else
            hi = mid - 1;

        if (low > hi)
        {
            count += (n - low);
            i++;
            low = 0;
            hi = n - 1;
        }
        opCount++;
    }
    cout << "Coutn of Negative Number : " << count;
    cout << endl
         << "Total number of operation : " << opCount;
}