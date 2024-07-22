#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the N: ";
    cin >> n;
    vector<int> arr(n, 5);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "size of vector : " << arr.size()
         << endl
         << "capacity of vector : " << arr.capacity();

    arr.push_back(8); // if all index full by value then vector create automatically double size of arr its size
    
    cout << endl
         << "After push_back : "
         << endl
         << "size of vector : " << arr.size()
         << endl
         << "capacity of vector : " << arr.capacity();

    arr.pop_back(); //remove element from last of arr

    cout << endl
         << "After pop_back : "
         << endl
         << "size of vector : " << arr.size()
         << endl
         << "capacity of vector : " << arr.capacity();
}