#include<iostream>
using namespace std;
int toN(int n){
    if(n==0) return 0;
    
    toN(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    toN(n);
}