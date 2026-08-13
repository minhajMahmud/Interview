#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch;

    getline(cin, s);
    cin >> ch;

    string ans = "";

    for (char c : s)
    {
        if (c != ch)
        {
            ans += c;
        }
    }

    cout << ans;

    return 0;
}