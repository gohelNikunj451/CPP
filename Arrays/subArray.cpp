#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);

  for (int i = 0; i < size; i++) //  point to start
  {
    for (int j = i; j < size; j++) // point to end
    {
      for (int k = i; k <= j; k++) // print start to end that's means i->j itreate
      {
        cout << arr[k];
      }
      cout << " ";
    }
    cout << endl;
  }
}