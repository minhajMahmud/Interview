#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
   map<char,int> mp;
   for(char ch:s){
    mp[ch]++;
   }
   for(auto x: mp){
    cout<<x.first<<x.second;
   }
    return 0;
}