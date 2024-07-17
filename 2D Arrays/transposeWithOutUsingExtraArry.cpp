#include <iostream>
using namespace std;

// Matrix : 
// 1 2 3 
// 4 5 6 
// 7 8 9 

// Transpose Matrix : 
// 1 4 7 
// 2 5 8 
// 3 6 9 

int main()
{
    int n;

    cout << "Enter Rows/Columns : ";
    cin >> n;

    int arr[n][n];

    cout << endl
         << "Enter All element : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl
         << "Matrix : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++) // instead 0 to i ,if value two time swap then transpose is not work properly
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    cout << endl
         << "Transpose Matrix : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}