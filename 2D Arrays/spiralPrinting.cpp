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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << endl
         << "Matrix : " << endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int minr = 0;
    int maxr = r - 1;
    int minc = 0;
    int maxc = c - 1;
    int count = 0;
    int tne = r * c;

    while (count < tne)
    {
        for (int j = minc; j <= maxc and count < tne; j++)
        {
            cout << arr[minr][j] << " ";
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr and count < tne; i++)
        {
            cout << arr[i][maxc] << " ";
            count++;
        }
        maxc--;
        for (int l = maxc; l >= minc and count < tne; l--)
        {
            cout << arr[maxr][l] << " ";
            count++;
        }
        maxr--;
        for (int r = maxr; r >= minr and count < tne; r--)
        {
            cout << arr[r][minc] << " ";
            count++;
        }
        minc++;
    }
}