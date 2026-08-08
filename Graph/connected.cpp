#include <iostream>
using namespace std;

int graph[100][100];
int visited[100];
int n, e;

// DFS Function
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

    // Initialize Graph
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            graph[i][j] = 0;
        }
    }

    // Initialize Visited Array
    for (int i = 0; i < 100; i++)
    {
        visited[i] = 0;
    }

    // Input Edges
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1;   // Remove this line for directed graph
    }

    int component = 0;

    cout << "Connected Components:\n";

    // Find all connected components
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            component++;
            cout << "Component " << component << ": ";
            dfs(i);
            cout << endl;
        }
    }

    cout << "\nTotal Connected Components = " << component << endl;

    return 0;
}