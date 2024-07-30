#include <iostream>
using namespace std;
// 1 2 3 4
// 6 7 8 9
// 11 13 16 17
// 20 30 31 55
// if we assume 2D array is 1D array 

int main()
{
  const int n = 500;
  int arr[n][n];
  int opCount = 0;

  int value = 1;

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      arr[i][j] = value++;
    }
  }
  int low = 0;
  int hi = n * n - 1;
  bool flag = false;
  int target = 1;
  int ans[1][2];

  while (low <= hi)
  {
    opCount++;
    int mid = (low + hi) / 2;
    int ridx = mid / n; //(column) formula of find row and column index of we want in 2D array
    int cidx = mid % n; //(row)

    if (arr[ridx][cidx] > target)
    {
      hi = mid - 1;
    }
    else if (arr[ridx][cidx] < target)
    {
      low = mid + 1;
    }
    else
    {
      flag = true;
      ans[0][0] = ridx;
      ans[0][1] = cidx;
      break;
    }
  }
  if (flag)
    cout << target << " is present at " << ans[0][0] << " " << ans[0][1];
  else
    cout << target << " is not present in array !!";

  cout << endl
       << "Opretion Count " << opCount;
}