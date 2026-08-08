#include <bits/stdc++.h>
using namespace std;

int main() {

    string s, t;
    cin >> s >> t;

    unordered_map<char, int> need;
    unordered_map<char, int> window;

    for (char c : t)
        need[c]++;

    int left = 0;
    int matched = 0;

    int start = 0;
    int minLen = INT_MAX;

    for (int right = 0; right < s.size(); right++) {

        char c = s[right];
        window[c]++;

        if (need.count(c) && window[c] <= need[c])
            matched++;

        while (matched == t.size()) {

            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            char x = s[left];

            window[x]--;

            if (need.count(x) && window[x] < need[x])
                matched--;

            left++;
        }
    }

    if (minLen == INT_MAX)
        cout << "";

    else
        cout << s.substr(start, minLen);
}   