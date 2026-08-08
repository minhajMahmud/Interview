#include <iostream>
using namespace std;

int main() {
    int n, e;
    cin >> n >> e;

    int graph[100][100] = {0};

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1; // Remove this line for directed graph
    }

    cout << "Adjacency Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}