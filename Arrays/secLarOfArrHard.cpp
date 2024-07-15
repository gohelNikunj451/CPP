#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {2, 6, 3, 7, 7};
    int max = INT32_MIN;
    int smax = INT32_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            smax = max;   // for previous max
            max = arr[i]; // for new max
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    cout << endl
         << "MAX : " << max << endl
         << "SMAX : " << smax;
}