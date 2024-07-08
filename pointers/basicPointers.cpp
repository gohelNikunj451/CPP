#include<iostream>
using namespace std;

int main(){
    int x=5;
    int *a=&x;
    
    cout<<"&x : "<<&x<<endl;
    cout<<"a : "<<a<<endl;

    *a=555;
    cout<<"*a : " <<*a<<endl;
    cout<<"x : " <<x<<endl;
    
}