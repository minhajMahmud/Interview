
// #include <bits/stdc++.h>
// using namespace std;
// //using stl
// int main() {
//     int arr[] = {1, 2, 2, 2, 3, 4};
//     int n = 6;
//     int target = 2;  
//     int count = upper_bound(arr, arr + n, target)
//               - lower_bound(arr, arr + n, target);

//     cout << count;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;

int arr[n];
map<int,int>mp;
for (int i = 0; i < n; i++){
    cin >> arr[i];
    mp[arr[i]]++;

}
int target;
cin>>target;
    for(auto x:mp){
        if(x.first==target){
            cout<<x.first<<" "<<x.second<<endl;
        }
        
    }
    return 0;
}
