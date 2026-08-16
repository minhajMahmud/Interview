#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < m; i++) {

        if (mp[b[i]] > 0) {
            cout << b[i] << " ";

            // duplicate prevent করার জন্য
            mp[b[i]] = 0;
        }
    }

    return 0;
}
/*#include <bits/stdc++.h>
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
        cin >> arr2[i];

    for (int i = 0; i < m; i++)
    {
        if (st.find(arr2[i]) != st.end())
        {
            cout << arr2[i] << " ";
            st.erase(arr2[i]);
        }
    }

    return 0;
}*/