#include <iostream>
using namespace std;

// Matrix : 
// 1 2 3 
// 4 5 6 
// 7 8 9 

// Wavy Matrix : 
// 7 4 1 
// 2 5 8 
// 9 6 3 

int main()
{
    int n;

    cout << "Enter Rows/Column : ";
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
        cout << endl;
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
    cout << endl
         << "Wavy Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        cout << endl;
    }
}