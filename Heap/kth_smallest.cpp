#include <iostream>
#include <queue>
#include <vector>
using namespace std;

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

    cout << k << "th Smallest Element = " << pq.top();

    return 0;
}