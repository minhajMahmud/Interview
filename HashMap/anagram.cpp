#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) {
        cout << "false";
        return 0;
    }
    unordered_map<char, int> mp;
    for (char c : s)
        mp[c]++;
    for (char c : t) {
        mp[c]--;

        if (mp[c] < 0) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";

    return 0;
}