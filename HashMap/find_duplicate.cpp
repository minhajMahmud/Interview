#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> st;
    bool duplicate = false;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (st.count(x)) {
            duplicate = true;
        }

        st.insert(x);
    }

    if (duplicate)
        cout << "true";
    else
        cout << "false";

    return 0;
}