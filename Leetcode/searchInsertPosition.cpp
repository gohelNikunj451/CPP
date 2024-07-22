#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1};
    int n = sizeof(arr) / sizeof(int);
    int target = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] <= target and target <= arr[i + 1])or arr[i]==1)
        {
            cout << "Position index is : " << i + 1;
        }
    }
}