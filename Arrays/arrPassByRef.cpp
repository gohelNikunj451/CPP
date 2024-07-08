#include <iostream>
using namespace std;

void arrChange(int arr[]){
    arr[0]=3;
}

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << "Enter " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }

    arrChange(arr); //array is not pass by value , array is pass by refrence

    cout<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "  ";
    }
}