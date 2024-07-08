#include<iostream>
using namespace std;

//       *       
//     *   *     
//   *       *   
// *           * 
//   *       *   
//     *   *     
//       *  

int main(){
    int n;
    
    cout<<"Enter the number : ";
    cin>>n;
    int p=(n/2)+1;
    int p1=p;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==p||j==p1){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
        if((n/2)+1>i){
            p--;
            p1++;
        }
        else{
            p++;
            p1--;
        }
        cout<<endl;
    }


}