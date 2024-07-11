#include<iostream>
using namespace std;

int main(){
    int arr[3][3],brr[3][3],add[3][3];

    cout<<"enter the first Array : "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    cout<<endl<<"Enter the Second Array : ";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>brr[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<"first Array : "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Second Array : "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;

    }
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            add[i][j]=arr[i][j]+brr[i][j];
        }

    }
    cout<<endl<<"Addition of two matrix : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
}