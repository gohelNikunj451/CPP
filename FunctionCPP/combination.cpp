#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    if(n==1) return 1;
    else{
        fact=n*factorial(n-1);
    }
    return fact;
}
int combi(int n,int r){
    
    
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main(){
    int n;
    cout<<"Enter the number of n: ";
    cin>>n;
    int r;
    cout<<"Enter the number of r: ";
    cin>>r;

    int comb=combi(n,r);

    cout<<"the combination of nCr : "<<comb;
}