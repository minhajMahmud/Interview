#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int prefix[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int l, r;
    cin >> l >> r;

    if (l == 0)
        cout << prefix[r];
    else
        cout << prefix[r] - prefix[l - 1];

    return 0;
}