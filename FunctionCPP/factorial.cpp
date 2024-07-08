#include<iostream>
using namespace std;

int factorialForLoop(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int factorialFun(int n){
    int fact=1;
    if(n==1) return 1;
    else{
        fact=n*factorialFun(n-1);
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    // int fact=factorialForLoop(n);

    int fact=factorialFun(n);
    
    cout<<fact;
}