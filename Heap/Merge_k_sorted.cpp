#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    int value;
    int row;
    int col;

    bool operator>(const Node &other) const {
        return value > other.value;
    }
};

int main() {

    vector<vector<int>> arr = {
        {1,4,7},
        {2,5,8},
        {3,6,9}
    };

    priority_queue<Node, vector<Node>, greater<Node>> pq;

    // প্রথম element push
    for (int i = 0; i < arr.size(); i++) {
        pq.push({arr[i][0], i, 0});
    }

    while (!pq.empty()) {

        Node current = pq.top();
        pq.pop();

        cout << current.value << " ";

        int r = current.row;
        int c = current.col;

        if (c + 1 < arr[r].size()) {
            pq.push({arr[r][c + 1], r, c + 1});
        }
    }

    return 0;
}