// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int n;
// cin >> n;
// int arr[n];
// for (int i = 0; i < n; i++)
//     cin >> arr[i];
//     sort(arr,arr+n);
// int slow=0;
// for (int fast= 1; fast< n; fast++){
//     if(arr[slow]!=arr[fast]){
//         slow++;
//         arr[slow]=arr[fast];
//     }
// }
// cout<<"Unique elemnet="<<slow+1<<endl;
// for (int i = 0; i <= slow; i++)
//         cout << arr[i] << " ";
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
set<int>st;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    // if(st.count(x)){
    //     //cout<<x<<endl;// duplicate value show koroar jonno
    //   // cout<<"true";
    //    return 0;
    // }
    st.insert(x);
}
for(auto x: st){
    cout<<x<<" ";
}
 //cout<<"false";
    return 0;
}

