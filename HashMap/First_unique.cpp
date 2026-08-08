#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
unordered_map<char ,int>mp;
for (char c:s)
{
    mp[c]++;
}//jodi last thke bole reverse kore dile hobe
for (int i = 0; i < s.size(); i++)
{
   if(mp[s[i]]==1){
    cout<<i;
    return 0;
   }
}
cout<<-1;
    return 0;
}