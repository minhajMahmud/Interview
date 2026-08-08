#include <bits/stdc++.h>
using namespace std;
int main() {
map<int ,int>mp;

    int n;
cin>>n;
while (n!=0)
{
    int dig=n%10;
    mp[dig]++;
    n/=10;
}
for(auto x: mp){
    cout<<x.first<<" "<<x.second;
}



    return 0;
}