#include<iostream>
using namespace std;

int main(){
  int a=5,b=10,c=20;
  bool p=false,q=false,r=true;

  cout<<a-++b-++c;
  cout<<endl<<(p==q==r);
}