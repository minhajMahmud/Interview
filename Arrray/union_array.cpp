#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr1[n], arr2[m];

    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        st.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        st.insert(arr2[i]);
    }

    for (auto x : st)
    {
        cout << x << " ";
    }

    return 0;
}