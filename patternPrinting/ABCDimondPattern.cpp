#include <iostream>
using namespace std;

//         A 
//       A B C 
//     A B C D E 
//   A B C D E F G 
// A B C D E F G H I 
//   A B C D E F G 
//     A B C D E 
//       A B C 
//         A 

int main()
{
    int n;
    cout << "Enter the odd number : ";
    cin >> n;
    int nsp = n / 2 + n/2, nop = 1;

    for (int i = 1; i <= n * 2 - 1; i++)
    {
        for (int s = 1; s <= nsp;s++){
            cout << "  ";
        }
        for (int j = 1; j <= nop;j++){
            cout << char(j+64) << " ";
        }
        if(i<((n*2-1)/2)+1){
            nsp--;
            nop+=2;
        }
        else{
            nsp++;
            nop-=2;
        }
            cout << endl;
    }

}