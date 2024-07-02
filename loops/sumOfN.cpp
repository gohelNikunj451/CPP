#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"the sum of 1 to "<<n<<" : "<<sum;
}