#include <iostream>
using namespace std;

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

  int i = 0;
  int j = n - 1;
  int target = 99;
  int flag = false;
  int ans[1][2];
  while (i < n or j >= 0)
  {
    opCount++;
    if (arr[i][j] < target)
      i++;
    else if (arr[i][j] > target)
      j--;
    else
    {
      flag = true;
      ans[0][0] = i;
      ans[0][1] = j;
      break;
    }
  }
  if (flag)
    cout << target << " Present at " << ans[0][0] << " " << ans[0][1] << " index";
  else
    cout << target << " is not present in Array ";
  cout << endl
       << "Opretion Count " << opCount;
}
