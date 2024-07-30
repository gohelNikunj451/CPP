  int target = 107;
  int ans;                // for store index of target
  bool flag = false;      // for break loop
  int operationCount = 0; // for count of operation

  while (rlow <= rhi)
  {
    int rmid = (rlow + rhi) / 2;
    if (arr[rmid][0] <= target && target >= arr[rmid][n - 1])
    {
      while (low <= hi)
      {

        int mid = (low + hi) / 2;
        if (arr[rmid][mid] > target)