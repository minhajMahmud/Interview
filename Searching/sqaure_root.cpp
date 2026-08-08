#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n;
cin>>n;
/* low=1
high=40
mid=20
20²>40
high=19
↓
mid=10
↓
high=9
↓
mid=5
25<40
Answer=5
↓
mid=7
49>40
↓
mid=6
36<40
Answer=6
*/
long long low=1,high=n,ans=0;
while(low<=high){
    int mid=low+(high-low)/2;
    if(mid*mid<=n){
        ans=mid;
        low=mid+1;
    }else high=mid-1;
}
    
cout<<ans;
    return 0;
}