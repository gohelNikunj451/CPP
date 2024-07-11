#include<iostream>
using namespace std;

int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        cout<<endl<<"Enter the "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=0,j=4;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}