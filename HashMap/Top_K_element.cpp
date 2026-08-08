#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
int n;
unordered_map<int ,int>mp;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]++;
}
int k;
cin>>k;
vector<pair<int,int>>v;
for(auto x:mp){
    v.push_back({x.second,x.first});
}
sort(v.rbegin(),v.rend());
for (int i = 0; i < k; i++)
{
    cout<<v[i].second<<" ";
}
    return 0;
}