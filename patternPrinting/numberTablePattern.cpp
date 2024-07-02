#include<iostream>
using namespace std;

// 1 2 3 4 5 6 7 8 9 10 
// 1 2 3 4     7 8 9 10 
// 1 2 3         8 9 10 
// 1 2             9 10 
// 1                 10 

int main(){
    int n,nos=1,pn;
    cout<<"enter the number : ";
    cin>>n;

    for(int i=1;i<=5;i++){
        pn=1;

        
        for(int j=n;j>=i;j--){
            cout<<pn<<" ";
            pn++;
        }
        for(int s=1;s<=nos;s++){
            cout<<"  ";
            
        }
        for(int k=n;k>=i;k--){
            pn--; //pn++;
            cout<<pn<<" ";
            
            
        }
        cout<<endl;
        nos+=2;
    }
}