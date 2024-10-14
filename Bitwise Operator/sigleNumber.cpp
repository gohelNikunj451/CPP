#include <iostream>
#include <vector>
using namespace std;
int findSingleNum(vector<int> &v)
{
  int ans = 0;
  for (int val : v)
  {
    ans ^= val;
  }
  return ans;
}
int main()
{
  vector<int> v = {10, 3, 4, 3, 4};
  cout << "uniqe number is " << findSingleNum(v);
}