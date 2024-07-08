#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int mn=INT32_MAX;
    int smin=INT32_MAX;

    for(int i=0;i<5;i++){
        cout<<endl<<"Enter the "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]<mn){
            mn=arr[i];
        }   
    }
    cout<<endl<<"Minimume number of array is : "<<mn;

    for(int i=0;i<5;i++){
        if(arr[i]!=mn){
            smin=min(arr[i],smin);
        }
    }
    cout<<endl<<"Second Minimume Number of array is : "<<smin;
}