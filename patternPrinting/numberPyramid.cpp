#include<iostream>
using namespace std;

//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int s=n-1;s>=i;s--){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int k=i-1;k>=1;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}