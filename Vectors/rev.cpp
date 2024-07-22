#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v(5);

    for (int i = 0; i < 5; i++)
    {
        // cin >> v[i];
        v[i] = i + 1;
    }

    reverse(v.begin(), v.end()-2);
    
    for (int i = 0; i < 5; i++)
    {
        cout << v[i]<<" ";
    }
    
}