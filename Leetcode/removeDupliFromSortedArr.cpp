#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 0, 1, 1, 1, 2, 3, 3, 4, 4};
    

    cout << "Duplicate Array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    int j = 0;
    for (int i = 0; i <sizeof(arr)/sizeof(int) ; i++)
    {
        if (arr[j] != arr[i])
        {
            arr[++j] = arr[i];
            
        }

    }
    cout << endl;
    cout << "Duplicate remove from Array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}