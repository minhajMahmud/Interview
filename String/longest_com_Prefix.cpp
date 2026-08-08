#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    string s1 = arr[0];
    string s2 = arr[n - 1];
    int index = 0;
    while (index < s1.length() && index < s2.length())
    {      
        if (s1[index] == s2[index])
            index++;
        else
            break;
    }
    cout << s1.substr(0, index);
    return 0;
} 