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
        int mid=0;
        while (left<=right)
        {
            if(arr[mid]==0){
                swap(arr[left],arr[right]);
                left++;
                mid++;
            }else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid],arr[right]);
                right--;
            }
        }
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}