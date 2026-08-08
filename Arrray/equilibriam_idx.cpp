#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

int arr[n];
int totalSum=0;
for (int i = 0; i < n; i++){
cin >> arr[i];
totalSum+=arr[i];
} 
int leftSum=0;
for (int i = 0; i < n; i++){
    int rightSum=totalSum-leftSum-arr[i];
    if(leftSum==rightSum){
        cout<<"equilibriam";
        //jadi index print korte bole tokhn
       // cout << "Equilibrium Index = " << i; 
    }
    leftSum+=arr[i];
}
cout<<"No";
//cout<<-1; mane neei

    return 0;
}