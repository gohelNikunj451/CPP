#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
     int n;
     cout << "Enter the N: ";
     cin >> n;
     vector<int> arr(n, 5); // in this arr first value is size of arr and second value is value of all index of arr
     vector<int> arr2 = {1, 2, 3, 4};
     cout << "arr2 data : ";
     for (int i = 0; i < arr2.size(); i++)
     {
          cout << " " << arr2[i];
     }

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

     arr.pop_back(); // remove element from last of arr

     cout << endl
          << "After pop_back : "
          << endl
          << "size of vector : " << arr.size()
          << endl
          << "capacity of vector : " << arr.capacity();

     cout << endl
          << " At function " << arr.at(3);
}