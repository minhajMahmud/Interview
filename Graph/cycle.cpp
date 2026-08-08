#include <iostream>
using namespace std;

int graph[100][100];
int visited[100];
int n, e;

bool dfs(int node, int parent)
{
    visited[node] = 1;

    for (int i = 0; i < n; i++)
    {
        if (graph[node][i] == 1)
        {
            if (!visited[i])
            {
                if (dfs(i, node))
                    return true;
            }
            else if (i != parent)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    bool cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, -1))
            {
                cycle = true;
                break;
            }
        }
    }

    if (cycle)
        cout << "Cycle Detected";
    else
        cout << "No Cycle";

    return 0;
}