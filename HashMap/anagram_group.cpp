#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    unordered_map<string, vector<string>> mp;

    string word;
    stringstream ss(s);

    while (ss >> word)
    {
        string key = word;

        sort(key.begin(), key.end());

        mp[key].push_back(word);
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



/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, vector<string>> mp;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

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
*/