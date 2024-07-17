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

// 90 Degree Rotate Matrix : 
// 7 4 1 
// 8 5 2 
// 9 6 3 

int main()
{
    int n;
    cout << "Enter the Rows/Colums : ";
    cin >> n;

    int arr[n][n];

    cout << endl
         << "Enter the all element : " << endl;

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
    for (int i = 0; i < n; i++)//for Transpose
    {
        for (int j = i; j < n; j++)
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

    for (int i = 0; i < n; i++)//for rotate
    {
        for (int j = 0, k = n - 1; j < k; j++, k--)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }
    cout << endl
         << "90 Degree Rotate Matrix : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}