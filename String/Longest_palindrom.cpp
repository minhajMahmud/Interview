#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int start = 0;
    int maxLength = 1;

    for (int i = 0; i < s.length(); i++)
    {
        // Odd Length
        int left = i;
        int right = i;

        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            int length = right - left + 1;

            if (length > maxLength)
            {
                start = left;
                maxLength = length;
            }

            left--;
            right++;
        }

        // Even Length
        left = i;
        right = i + 1;

        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            int length = right - left + 1;

            if (length > maxLength)
            {
                start = left;
                maxLength = length;
            }
            left--;
            right++;
        }
    }

    cout << s.substr(start, maxLength);

    return 0;
}