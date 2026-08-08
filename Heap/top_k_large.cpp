#include <iostream>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
/*Min Heap ব্যবহার করো।
Heap-এর size সবসময় k রাখো।
নতুন element এলে push করো।
যদি size > k হয়, তাহলে smallest element pop করো।
শেষে heap-এ Top K Largest element থাকবে।
*/
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int k;
    cin >> k;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);

        if (pq.size() > k)
            pq.pop();
    }

    cout << "Top " << k << " Largest Elements:\n";
vector<int>ans;
    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x<<" ";

    }
}