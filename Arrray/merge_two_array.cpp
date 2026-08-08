#include <bits/stdc++.h>
using namespace std;
int main() {

    int n,m;
    cin >> n>>m;
    
    int arr1[n];
    int arr2[m];
    int  arr[n+m];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
        for (int i = 0; i < m; i++)
        cin >> arr2[i];
        for(int i=0;i<n;i++){
            arr[i]=arr1[i];
        }
        for(int i=0;i<m;i++){
            arr[n+i]=arr2[i];
        }
        for (int i = 0; i < n+m; i++)
        {// jodi amke sorted kore dite bole tokhn 
            sort(arr,arr+n+m);
            cout<<arr[i]<< " ";
        }
        

    return 0;
}