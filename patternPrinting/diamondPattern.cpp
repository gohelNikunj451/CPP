#include <iostream>
using namespace std;

//     *
//   * * *
// * * * * *
//   * * *
//     *

int main()
{
    int n;
    
    cout << "Enter the Number : ";
    cin >> n;

    int nos=n/2;
    int nop=1;

    for (int i = 1; i <= n; i++)
    {
        for(int s=1;s<=nos;s++){
            cout<<"  ";
        }
        for (int j = 1; j <= nop; j++)
        {
            cout<<"* ";
        }
        if((n/2)+1>i){
            nos--;
            nop+=2;
        }
        else{
            nos++;
            nop-=2;
        }
        cout << endl;
    }
}