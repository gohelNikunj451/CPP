#include <iostream>
using namespace std;


int main()
{
    int arr[5];
    int mx;

    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Enter the " << i + 1 << " : ";
        cin >> arr[i];
    }
    mx = arr[0]; //INT_MAX OR INT-MIN
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        // if (arr[i] > mx)
        // {
        //     mx = arr[i]; 
        // }
        mx=max(arr[i],mx);
    }
    cout<<"max of array is : "<<mx;
    
}
// if we want to minimume of array 

// if(arr[i]>mx)

// min(arr[i],mx)
