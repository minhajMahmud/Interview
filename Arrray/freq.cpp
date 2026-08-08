#include <bits/stdc++.h>
#include<map>
using namespace std;
int main() {

int n;
cin >> n;
map<int ,int> mp;
int arr[n];

for (int i = 0; i < n; i++){
cin >> arr[i];
 mp[arr[i]]++;
}
       for(auto x: mp){
    cout<<x.first<<" "<<x.second<<endl;
   }
}