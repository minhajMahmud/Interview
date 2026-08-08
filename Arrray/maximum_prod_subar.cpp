#include <bits/stdc++.h>
using namespace std;
int maxProduct(int arr[],int n){
    int maxProd=arr[0];
    int minProd=arr[0];
    int ans=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0)
        swap(maxProd,minProd);
         maxProd=max(arr[i],maxProd*arr[i]);
         minProd=min(arr[i],minProd*arr[i]);
         ans=max(ans,maxProd);
    }
    return ans;
   
}
int main() {
int n;
cin >> n;

int arr[n];

for (int i = 0; i < n; i++)
    cin >> arr[i];

cout<<maxProduct(arr,n);
    

    return 0;
}