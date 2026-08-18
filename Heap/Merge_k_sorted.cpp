#include <bits/stdc++.h>
using namespace std;

struct Node {
    int value;
    int row;
    int col;
};

struct Compare {
    bool operator()(Node a, Node b) {
        return a.value > b.value;
    }
};

int main() {
    int k;
    cin >> k;

    vector<vector<int>> arr(k);

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;

        arr[i].resize(n);

        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    priority_queue<Node, vector<Node>, Compare> pq;

    // First element of every array
    for (int i = 0; i < k; i++) {
        if (!arr[i].empty()) {
            pq.push({arr[i][0], i, 0});
        }
    }

    while (!pq.empty()) {

        Node current = pq.top();
        pq.pop();

        cout << current.value << " ";

        int row = current.row;
        int col = current.col;

        // Next element from same array
        if (col + 1 < arr[row].size()) {
            pq.push({arr[row][col + 1], row, col + 1});
        }
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    vector<int> ans;

    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;

        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            ans.push_back(x);
        }
    }

    sort(ans.begin(), ans.end());

    for (int x : ans)
        cout << x << " ";

    return 0;
}
*/