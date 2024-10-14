#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5};
  vector<int> ans;
  int low = 0;
  int high = arr.size() - 1;
  int target;
  cout << "Enter the target : ";
  cin >> target;
  while (low < high)
  {
    int ps = arr[low] + arr[high];
    if (ps > target)
    {
      high--;
    }
    else if (ps < target)
    {
      low++;
    }
    else
    {
      ans.push_back(low);
      ans.push_back(high);
      break;
    }
  }
  cout << endl
       << "Answer : [ " << arr[ans[0]] << " " << arr[ans[1]] << " ]";
}