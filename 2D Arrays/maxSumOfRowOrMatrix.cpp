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

    int maxSum = INT32_MIN;

    cout << endl
         << "Enter All element : " << endl;

    for (int i = 0; i < r; i++) // input value
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "Matrix : " << endl;

    for (int i = 0; i < r; i++) // print value
    {
        int sum = 0; // refresh value for next sum
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j]; // find sum of row
            cout << arr[i][j] << " ";
        }
        if (maxSum < sum)
        {
            maxSum = sum; // find maxSum of sum of row
        }
        cout << endl;
    }

    cout << "The maximume sum of row : " << maxSum;
}
