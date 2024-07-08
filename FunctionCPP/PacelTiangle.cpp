#include<iostream>
using namespace std;

//           1   
//         1   1   
//       1   2   1   
//     1   3   3   1   
//   1   4   6   4   1   

int fact(int n){
    int f=1;
    // if(n==1) {
    //     return 1;}
    // else{
    //     f=n*fact(n-1);
    // }
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    return f;
}

int combi(int n,int r){
    
    return fact(n)/(fact(r)*fact(n-r));
}

int main(){
    int n;
    
    cout<<"Enter the N : ";
    cin>>n;
    
    for(int i=0;i<=n;i++){
        for(int s=n;s>=i;s--){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<combi(i,j)<<"   ";
            
        }
        cout<<endl;
    }
}