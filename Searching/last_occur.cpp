#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

int arr[n];
int target;
for (int i = 0; i < n; i++)
    cin >> arr[i];
 cin>>target;   
int low=0;
int high=n-1;
int ans=0;
while(low<=high){
    {
        int mid=low+(high-low)/2;
    if(arr[mid]==target)
    {
        ans=mid;
        low=mid+1;
    } else if(arr[mid]<target) low=mid+1;
    else{
        high=mid-1;
    }
    
    }
    cout<<ans;
    return 0;
}
}