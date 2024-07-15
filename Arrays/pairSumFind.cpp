#include<iostream>
using namespace std;

int main(){
    int arr[5];

    for (int i = 0; i < 5;i++){
        cout << "Enter " << i + 1<<" : ";
        cin >> arr[i];
    }
    cout << endl;

    int x;
    cout << "Enter the number you want sum of pair : ";
    cin >> x;
    cout << endl;

    for (int i = 0; i < 5;i++){
        for (int j = i; j < 5;j++){
            if(arr[i]+arr[j]==x){
                cout << endl
                     << "( " << arr[i] << " , " << arr[j] << " )";
            }
        }
    }
}