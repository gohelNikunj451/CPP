#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int mx=INT32_MIN;
    int smax=INT32_MIN;

    for(int i=0;i<5;i++){
        cout<<endl<<"Enter the number "<<i<<" : ";
        cin>>arr[i];
    }
    
    for(int i=0;i<5;i++){
        mx=max(arr[i],mx);
    }
    cout<<endl<<"Maximume number is : "<<mx;

    for(int i=0;i<5;i++){
        if(arr[i]!=mx ){
            smax=max(arr[i],smax);
        }
    }
    cout<<endl<<"second Largest number is : "<<smax;
}