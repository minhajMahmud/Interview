#include <iostream>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
/*Max Heap ব্যবহার করো।
Heap-এর size সবসময় k রাখো।
নতুন element push করো।
যদি size > k হয়, তাহলে largest element pop করো।
শেষে heap-এ Top K Smallest element থাকবে।
*/
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);

        if (pq.size() > k)
            pq.pop();
    }

    cout << "Top " << k << " Smallest Elements:\n";
/*
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    */
    vector<int> ans;

    while (!pq.empty()) {
        ans.push_back(pq.top());
        pq.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << "Top " << k << " Smallest Elements:\n";

    for (int x : ans)
        cout << x << " ";
    
}