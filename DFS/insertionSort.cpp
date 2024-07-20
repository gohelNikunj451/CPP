#include <iostream>
using namespace std;

int main()
{
    int a[6] = {12, 31, 25, 8, 32, 17};

    int i = 0;
    int p = 0;
    int temp = 0;

    while (i <6)
    {
        // cout <<endl<< "enter the " << i << " : ";
        // cin >> a[i];

        temp = a[i];
        p = i - 1;

        while(temp<a[p] && p>=0){
            a[p + 1] = a[p];
            a[p] = temp;
            p -= 1;
        }
        i++;
    }
    cout <<endl<<"Array all element : ";
    for (int i = 0; i < 6;i++){
        cout << a[i] << " ";
    }
}