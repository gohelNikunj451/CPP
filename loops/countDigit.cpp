#include<iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    int ld=0;
    int sum=0;
    cin>>n;
    
    while(n!=0){
        ld=n%10;
        sum+=ld; //if we want to product we can write * replace to + 
        count++;
        n/=10;
    }
    cout<<"the count of digit is : "<<count<<endl;
    cout<<"the sum of digit is : "<<sum<<endl;
}