#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int brr[5];

    for(int i=0;i<5;i++){
        cout<<endl<<"Enter the number : ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        brr[4-i]=arr[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<brr[i]<<" ";
    }
}