#include<iostream>
using namespace std;

int main(){

  int arr[5];
  int i = 0;
  for(int ele:arr){
    
    cin >> arr[i++];
  }
  for(int ele:arr){
    cout << ele<<" ";
  }
}