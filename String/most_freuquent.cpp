#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    map<char, int> mp;

    for (char ch : s)
    {
        mp[ch]++;
    }

    char mostFrequent;
    int maxCount = 0;

    for (auto x : mp)
    {
        if (x.second > maxCount)
        {
            maxCount = x.second;
            mostFrequent = x.first;
        }
    }

    cout << mostFrequent << " " << maxCount;

    return 0;
}