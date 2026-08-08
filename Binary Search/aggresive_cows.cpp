#include <bits/stdc++.h>
using namespace std;
bool possible(int arr[],int n,int cows,int dist){
    int count=1;
    int last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=dist){
            count++;
            last=arr[i];
        }
        if(count>=cows)
        return true;
    }
    return false;
}
int main() {

    int n,cows;
    cin>>n>>cows;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 sort(arr,arr+n);
    int low=1;
    int high=arr[n-1]-arr[0];
    int ans=0;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if(possible(arr,n,cows,mid)){
            ans=mid;
            low=mid+1;

        }else{
            high=mid-1;
        }
    }
    cout<<ans;

    return 0;
}