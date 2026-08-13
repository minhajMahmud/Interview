#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string ans = "";
    bool space = false;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            ans += str[i];
            space = false;
        }
        else
        {
            // Add only one space between words
            if (!space && !ans.empty())
            {
                ans += ' ';
                space = true;
            }
        }
    }

    // Remove trailing space
    if (!ans.empty() && ans.back() == ' ')
        ans.pop_back();

    cout << ans;

    return 0;
}