#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

int arr[n];

for (int i = 0; i < n; i++)
    cin >> arr[i];
int k;
cin>>k;
int sum=0;
for (int i = 0; i < k; i++){
    sum=sum+arr[i];
}
int mx=sum;
for(int i=k;i<n;i++){
    //New Sum = Old Sum - Left Element + Right Element
    sum=sum-arr[i-k]+arr[i];
mx=max(mx,sum);
}
    
    cout<<mx;

    return 0;
}