#include <iostream>
using namespace std;

int graph[100][100];
int visited[100];
int n, e;

void dfs(int node)
{
    visited[node] = 1;
    cout << node << " ";

    for (int i = 0; i < n; i++)
    {
        if (graph[node][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}

int main()
{
    cin >> n >> e;

    // Input edges
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1; // Remove for directed graph
    }

    cout << "DFS: ";

    dfs(0);      // Start from node 0

    return 0;
}