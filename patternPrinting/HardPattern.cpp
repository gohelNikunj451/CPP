#include <iostream>
using namespace std;

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4 

int main()
{
    int n,min;
    cout << "Enter the number : ";
    cin >> n;

    for (int i = 1; i <= n*2-1; i++)
    {
        for (int j = 1; j <= n*2-1; j++)
        {
            int a=i;
            int b=j;
            
            if(i>n) a=n*2-i;
            if(b>n) b=n*2-j;

            if(a<b) min=a;
            else min=b;

            cout<<n+1-min<<" ";
        }
        cout << endl;
    }
}