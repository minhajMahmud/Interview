#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

int arr[n];

for (int i = 0; i < n; i++)
    cin >> arr[i];
int left=0;
int right=n-1;
int ans=0;

while (left<right){
    int area=(right-left)*min(arr[left],arr[right]);
    ans=max(ans,area);
    if(arr[left]<arr[right]){
        left++;
    }else{
        right--;
    }
}
cout<<ans;

    return 0;
}