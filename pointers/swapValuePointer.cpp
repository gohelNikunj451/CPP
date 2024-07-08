#include<iostream>
using namespace std;

int swap(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main(){
    int a,b;
    // int *x=&a,*y=&b;

    cout<<"Enter the value of A and B : ";
    cin>>a;
    cin>>b;

    swap(&a,&b);

    cout<<"swap value is : a : "<<a<<" b : "<<b;

}