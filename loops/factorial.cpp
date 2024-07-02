#include<iostream>
using namespace std;

int main(){
    int n;
    int fact=1;
    cin>>n;

    for(int i=2;i<=n;i++){
        fact*=i;
    }
    cout<<"the factorial of "<<n<<" : "<<fact;
}
