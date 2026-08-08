#include <bits/stdc++.h>
using namespace std;
/*
prefix[i] = prefix[i-1] + arr[i]
range sum query
sum(l, r) = prefix[r] - prefix[l-1] (যদি l > 0)
sum(0, r) = prefix[r]
*/
int main() {
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
    cin >> arr[i];
int prefix[n];
prefix[0]=arr[0];
for (int i = 1; i < n; i++){
    prefix[i]=prefix[i-1]+arr[i];
}
for (int i = 0; i < n; i++){
   cout<<prefix[i]<<" ";
}
   
    

    return 0;
}