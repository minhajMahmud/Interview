#include <bits/stdc++.h>
using namespace std;

bool possible(int arr[], int n, int h, int speed)
{
    long long hours = 0;

    for (int i = 0; i < n; i++)
    {
        hours += (arr[i] + speed - 1) / speed;

        if (hours > h)
            return false;
    }

    return true;
}

int main()
{
    int n, h;
    cin >> n >> h;

    int arr[1000];

    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    int low = 1;
    int high = mx;
    int ans = mx;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (possible(arr, n, h, mid))
        {
            ans = mid;
            high = mid - 1;   // Try a smaller speed
        }
        else
        {
            low = mid + 1;    // Need a higher speed
        }
    }

    cout << ans;

    return 0;
}