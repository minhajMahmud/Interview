#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
unordered_map<int,int> mp;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
   mp[x]++;
}
for ( auto x: mp){
if(x.second>n/2){
    cout<<x.first;
    return 0;
    
}
}

cout<<"NO majority element";
    
}