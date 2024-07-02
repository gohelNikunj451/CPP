#include<iostream>
using namespace std;

int main(){
    int sp,cp;
    cout<<"Enter selling price : ";
    cin>>sp;

    cout<<"Enter cost price : ";
    cin>>cp;

    if(sp>cp) {
        cout<<"You have profit : "<<sp-cp<<" Ruppes";
    }
    else if(sp<cp) {
        cout<<"You have lose : "<<cp-sp<<" Ruppes";
    }
    else{
        cout<<"you have not profit or lose";
    }
}
