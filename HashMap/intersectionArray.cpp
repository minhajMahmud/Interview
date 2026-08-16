#include <bits/stdc++.h>
using namespace std;
int main() {

    int n,m;
    cin >> n>>m;
    map<int,int>mp;
    int arr1[n],arr2[m];
    
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
        for(int i=0;i<n;i++)
            mp[arr1[i]]++;
        for (int i = 0; i < m; i++)
        {
            if(mp[arr2[i]]>0){
                cout<<arr2[i]<<" ";
                mp[arr2[i]]=0;
            }
        }
        
    return 0;
}