#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for (int i = 0; i < n; i++) {
        int distance, node;
        cin >> distance >> node;
        pq.push({distance, node});
    }

    while (!pq.empty()) {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }

    return 0;
}