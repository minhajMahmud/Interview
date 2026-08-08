#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int arr[n];
for (int i = 0; i < n; i++)
    cin >> arr[i];
int slow=0;
for (int fast= 0; fast< n; fast++){
    if(arr[fast]!=0){
       swap( arr[slow],arr[fast]);
       slow++;
    }
}
//cout<<"Unique elemnet="<<slow+1<<endl;
for (int i = 0; i <n; i++)
        cout << arr[i] << " ";
    return 0;
}