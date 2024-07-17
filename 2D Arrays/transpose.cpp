#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter Rows : ";
    cin >> r;
    cout << endl
         << "Enter Column : ";
    cin >> c;

    int arr[r][c];

    cout << endl
         << "Enter All element : " << endl;

    for (int i = 0; i < r; i++) // input matrix
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "Matrix : " << endl;

    for (int i = 0; i < r; i++) // print matrix
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < c; i++) // transpose of matrix
    {
        for (int j = 0; j < r; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}