#include <iostream>
using namespace std;
// 1 2 3 4
// 6 7 8 9
// 11 13 16 17
// 20 30 31 55
int main()
{
  const int size = 500;
  int arr[size][size];

  int value = 1;

  for (int i = 0; i < size; ++i)
  {
    for (int j = 0; j < size; ++j)
    {
      arr[i][j] = value++;
    }
  }
  int n = size;
  int low = 0;
  int hi = n - 1;
  int rlow = 0;
  int rhi = n - 1;
  int target = 1;
  int ans[1][2];          // for store index of target
  bool flag = false;      // for break loop
  int operationCount = 0; // for count of operation

  while (rlow <= rhi)
  {
    operationCount++;
    int rmid = (rlow + rhi) / 2;
    if (arr[rmid][0] <= target && target <= arr[rmid][n - 1])
    {
      operationCount++;
      while (low <= hi)
      {

        int mid = (low + hi) / 2;
        if (arr[rmid][mid] > target)
        {
          hi = mid - 1;
        }
        else if (arr[rmid][mid] < target)
        {
          low = mid + 1;
        }
        else
        {
          ans[0][0] = rmid;
          ans[0][1] = mid;
          flag = 1;
          break;
        }
      }
    }

    else if (arr[rmid][n - 1] > target)
      rhi = rmid - 1;
    else
      rlow = rmid + 1;
    if (flag)
      break;
  }

  if (flag)
    cout << target << " is present at " << ans[0][0] << " " << ans[0][1] << " index";
  else
    cout << target << " is not present at any index of array";

  cout << endl
       << "Operation Count : " << operationCount;
}