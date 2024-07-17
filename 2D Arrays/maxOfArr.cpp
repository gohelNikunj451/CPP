#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int r, c,idxi,idxj;
    int max = INT32_MIN;

    cout << "Enter Rows : ";
    cin >> r;
    cout << endl
         << "Enter Column : ";
    cin >> c;

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
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            {
                if(max<arr[i][j]){
                    max = arr[i][j];
                    idxi = i;
                    idxj = j;
                }
        }
    }
    cout << endl
         << "Maximum Element : " << max<<" at "<<idxi<<" "<<idxj;
}