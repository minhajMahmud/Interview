#include <bits/stdc++.h>
using namespace std;
int main() {
string s1,s2;
getline(cin,s1);
getline(cin,s2);
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
if(s1==s2){
    cout<<"anagram";
}else{
    cout<<"not";
}
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    if (s.size() != t.size()) {
        cout << "false";
        return 0;
    }
    unordered_map<char, int> mp;
    for (char c : s)
        mp[c]++;
    for (char c : t) {
        mp[c]--;

        if (mp[c] < 0) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";

    return 0;
}
*/