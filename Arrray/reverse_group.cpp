#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i += k)
    {
        int left = i;
        int right = min(i + k - 1, n - 1);

        while (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}