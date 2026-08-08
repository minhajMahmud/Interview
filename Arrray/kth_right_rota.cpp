#include <bits/stdc++.h>
using namespace std;
void revArr(int arr[],int left,int right ){
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
int main() {
    int n,k;
    cin >> n>>k;
    int arr[n]; 
    for (int i = 0; i < n; i++)
        cin >> arr[i];
         k=k%n;
revArr(arr,0,n-1);
revArr(arr,0,k-1);
revArr(arr,k,n-1);
      for (int i = 0; i < n; i++)
        cout << arr[i]<<" "; 

    return 0;
}