#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 1, 3, 2};
    bool flag;
    for (int i = 0; i < 5; i++)
    {
        flag = false;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
                flag = true;
        }
        if (flag == false)
        {
            cout << endl
                 << arr[i] << " is uniqNumber";
            break;
        }
    }
}