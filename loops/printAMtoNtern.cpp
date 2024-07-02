#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=3;i<=(n*n*n*n);i*=4){
        cout<<i<<endl;
    }
}