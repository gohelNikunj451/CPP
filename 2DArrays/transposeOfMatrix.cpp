#include<iostream>
using namespace std;

int main(){
    int arr[2][3],tr[3][2];

    cout<<"enter the first Array : "<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    
    cout<<endl<<"first Array : "<<endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            tr[i][j]=arr[j][i];
        }
        
    }
    cout<<endl<<"Transpose of matrix : "<<endl;
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}