#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter Rows of first Matrix : ";
    cin >> r;
    cout << endl
         << "Enter Column of first Matrix: ";
    cin >> c;

    int a[r][c];

    cout << endl
         << "Enter All element of First Matrix: " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl
         << "First Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int p, q;

    cout << "Enter Rows of 2nd Matrix: ";
    cin >> p;
    cout << endl
         << "Enter Column of 2nd Matrix: ";
    cin >> q;

    int b[p][q];

    cout << endl
         << "Enter All element of 2nd Matrix : " << endl;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl
         << "2nd Matrix : " << endl;

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    // multiplication

    int mul[r][q];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < q; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < r; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << endl
         << "Multiplication of two matrix : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
}