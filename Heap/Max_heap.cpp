#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int> maxHeap;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        maxHeap.push(x);
    }
    cout << "Max Heap Elements:\n";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    return 0;
}