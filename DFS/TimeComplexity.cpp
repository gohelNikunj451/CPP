#include <iostream>
using namespace std;

int main()
{
    int arr[11] = {1, 2, 3, 6, 4, 8, 9, 7, 5, 5,10};
    int countOfLoop = 0;

    // usign extra time

    // for (int i = 0; i < 10; i++)
    // {
    //     bool flag = false;
    //     for (int j = i + 1; j < 10; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             cout << "The duplicate element : " << arr[j];
    //             flag = true;
    //             break;
    //         }
    //         countOfLoop++; // 44 repeat loop
    //     }
    //     if (flag)
    //         break;
    // }

    // using extra space

    // int temp[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // for (int i = 0; i < 10; i++)
    // {
    //     if (temp[arr[i]] == 1)
    //     {
    //         cout << "The duplicate element : " << arr[i];

    //         countOfLoop++;
    //         break;
    //     }
    //     temp[arr[i]] = 1;
    //     countOfLoop++; // 10 times repeat loop for ans
    // }
    int sum = 0;
    int n = 10;
    for (int i = 0; i <=n+1; i++)
    {
        sum += i;
    }
    cout << "The duplicate element : " << sum - ((n * (n + 1)) / 2);

    cout << endl
         << "count of loop : " << countOfLoop;
}