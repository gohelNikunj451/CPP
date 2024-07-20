#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 10;
    int y = 20;

    cout << "y : " << y << " x : " << x;

    swap(&x, &y);

    cout << endl
         << "y : " << y << " x : " << x;
}