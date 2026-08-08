#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

int arr[n];

for (int i = 0; i < n; i++)
    cin >> arr[i];
int minPrice=arr[0];
int maxProfit=0;
for (int i = 1; i < n; i++){
    if(arr[i]<minPrice){
        minPrice=arr[i];
    }else{
        maxProfit=max(maxProfit,arr[i]-minPrice);
    }

}
cout<<"Maximum Profit="<< " "<<maxProfit;
    return 0;
}