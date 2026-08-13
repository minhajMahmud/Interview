#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
map<int,int>mp;
cin >> n;

int arr[n];

for (int i = 0; i < n; i++){
  cin >> arr[i];
  mp[arr[i]]++;
}
for(auto x: mp){
    if(x.second>1){
        cout<<x.first<<" ";
    }
}


    return 0;
}