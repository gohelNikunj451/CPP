#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter Row : ";
    cin >> r;
    cout << endl
         << "Enter column : ";
    cin >> c;
    int arr[r][c];

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
            arr[minr][j] = count + 1;
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr and count < tne; i++)
        {
            arr[i][maxc] = count + 1;
            count++;
        }
        maxc--;
        for (int l = maxc; l >= minc and count < tne; l--)
        {
            arr[maxr][l] = count + 1;
            count++;
        }
        maxr--;
        for (int r = maxr; r >= minr and count < tne; r--)
        {
            arr[r][minc] = count + 1;
            count++;
        }
        minc++;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
