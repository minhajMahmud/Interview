#include <bits/stdc++.h>
#include<map>
using namespace std;
int main() {
int n;
cin >> n;
//w e are using this also unordered_map<int,int> mp;
map<int ,int> mp;
for (int i = 0; i < n; i++){
    int x;
    cin>>x;
    mp[x]++;
}
   for(auto x: mp){
    cout<<x.first<<" "<<x.second<<endl;
   }
}
/*
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
    cout<<x.first<<" "<<x.second<<endl;
   }

    return 0;
}
*/