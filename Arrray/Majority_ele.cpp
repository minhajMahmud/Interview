/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int candidate = 0;
    int cnt = 0;

    // Find candidate
    for (int num : arr) {
        if (cnt == 0)
            candidate = num;

        if (num == candidate)
            cnt++;
        else
            cnt--;
    }

    // Verify candidate
    cnt = 0;

    for (int num : arr) {
        if (num == candidate)
            cnt++;
    }

    if (cnt > n / 2)
        cout << "Majority Element = " << candidate;
    else
        cout << "No Majority Element";

    return 0;
}
    */
#include <bits/stdc++.h>
using namespace std;
int main() {
map<int,int> mp;
int arr[100];
int n;
cin>>n;
for(int i = 0; i < n; i++){
    cin>>arr[i];
mp[arr[i]]++;
}

for(auto x : mp)
{
    if(x.second > n / 2)
        cout << x.first;
}
    return 0;
}