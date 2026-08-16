#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    map<int, int> mp;

    // First array
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    // Second array
    for (int i = 0; i < m; i++)
    {
        mp[b[i]]++;
    }

    // Print unique elements
    for (auto x : mp)
    {
        cout << x.first << " ";
    }

    return 0;
}