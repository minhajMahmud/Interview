#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> mp;

    for (char c : t)
        mp[c]++;

    int left = 0;
    int count = t.size();

    int start = 0;
    int minLen = 1000000;

    for (int right = 0; right < s.size(); right++)
    {
        if (mp[s[right]] > 0)
            count--;

        mp[s[right]]--;

        while (count == 0)
        {
            if (right - left + 1 < minLen)
            {
                minLen = right - left + 1;
                start = left;
            }

            mp[s[left]]++;

            if (mp[s[left]] > 0)
                count++;

            left++;
        }
    }

    if (minLen == 1000000)
        cout << "";
    else
        cout << s.substr(start, minLen);
}