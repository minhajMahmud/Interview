#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
string s;
getline(cin,s);
    unordered_map<string, vector<string>> mp;

    for (int i = 0; i <s.length(); i++)
    {
        string key = s;

        sort(key.begin(), key.end());

        mp[key].push_back(s);
    }

    for (auto it : mp)
    {
        cout << "[ ";

        for (string word : it.second)
        {
            cout << word << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}