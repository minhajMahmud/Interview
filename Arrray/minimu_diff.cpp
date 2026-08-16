#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mindiff=INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
           int diff=abs(arr[i]-arr[j]);
           if(diff<mindiff){
            mindiff=diff;
           } 
        }
    }
    cout<<mindiff;    

    return 0;
}