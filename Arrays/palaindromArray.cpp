#include<iostream>
using namespace std;

int main(){
    int a[5],b[5];
    int flag=0;

    for(int i=0;i<5;i++){
        cout<<endl<<"Enter the "<<i+1<<" : ";
        cin>>a[i];
        b[i]=a[i];
    }
    for(int i=0,j=4;i<j;i++,j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<b[i]<<" ";
    }
    for(int i=0;i<5;i++){
        if(a[i]!=b[i]){
            flag=1;
            
            
        }
    }
    cout<<endl;
    if(flag=1)
    {
        cout<<"the array is not palaindrom";
    } 
    else 
    {   
    cout<<"the array is palaindrom";
    }
}