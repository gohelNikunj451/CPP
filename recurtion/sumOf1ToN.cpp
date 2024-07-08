#include<iostream>
using namespace std;
int sumOf1ToN(int n){
    int sum=0;
    if(n==0) return 0;
    return n+sumOf1ToN(n-1);
    
}

int main(){
    int n;
    cout<<"Enter the n : ";
    cin>>n;

   int sum= sumOf1ToN(n);
   cout<<endl<<"sum : "<<sum;
}