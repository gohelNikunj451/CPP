#include <iostream>
using namespace std;

void rev(int arr[], int a, int b)
{
    for (int i = a, j = b; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    rev(arr, 0, 9);
    rev(arr, 0, 3);
    rev(arr, 4, 9);

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}