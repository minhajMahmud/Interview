#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin>>s;
    map<char ,char>mp;
    int left=0;
    int maxLen=0;
    for (int right = 0; right < s.length(); right++)
    {
        mp[s[right]]++;
        //Right নতুন character যোগ করে → duplicate হলে Left character বাদ দিতে থাকে
        // → duplicate চলে গেলে আবার valid window পাওয়া যায়।
        while (mp[s[right]]>1)
        {
           mp[s[left]]--;
           left++;
        }
        maxLen=max(maxLen,right-left+1);
        
    }
    cout<<maxLen;
    

    return 0;
}