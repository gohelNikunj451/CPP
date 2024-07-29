#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 5, 8, 9, 10}, b[5] = {1,3, 9, 11, 99}, c[10];

    int i, k, j;
    i = k = j = 0;

    while (i < 5 and j < 5)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[i];
            k++;
            j++;
        }
    }
    while (i < 5)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < 5)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    for (i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
}