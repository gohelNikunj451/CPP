#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr = {1,1,1,1,1,2,3,4};
  int ans = 0;
  int freq = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (freq == 0)
    {
      ans = arr[i];
    }
    if (ans == arr[i])
    {
      freq++;
    }
    else
    {
      freq--;
    }
  }
  cout << "Mejority Element : " << ans;
}