#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int cnt = 0;
    string word = "";

    for (int i = 0; i <= s.size(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            if (word.length() > 3)
            {
                bool vowel = false;
                bool consonant = false;
                bool valid = true;

                for (char ch : word)
                {
                    if (!isalnum(ch))
                    {
                        valid = false;
                        break;
                    }

                    if (isalpha(ch))
                    {
                        if (ch == 'a' || ch == 'e' || ch == 'i' ||
                            ch == 'o' || ch == 'u')
                        {
                            vowel = true;
                        }
                        else
                        {
                            consonant = true;
                        }
                    }
                }

                if (valid && vowel && consonant)
                {
                    cnt++;
                }
            }

            // নতুন word শুরু
            word = "";
        }
        else
        {
            word += s[i];
        }
    }

    cout << cnt << endl;

    return 0;
}