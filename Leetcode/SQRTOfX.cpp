#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the x : ";
    cin >> x;

    int low = 0;
    int hi = x;
    int ans;

    if (x <= 1)
    {
        ans = x;
    }
    else
    {
        while (low <= hi)
        {
            int mid = (low + hi) / 2;

            if (mid == x / mid)
            {
                ans = mid;
                break;
            }
            else if (mid > x / mid)
            {
                hi = mid - 1;
            }
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }
    }

    cout << endl
         << "sqrt of " << x << " is " << ans;
}