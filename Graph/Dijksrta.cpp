#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> graph[100];
int dist[100];

void dijkstra(int source,int n)
{
    for(int i=0;i<n;i++)
        dist[i]=INT_MAX;

    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;

    dist[source]=0;
    pq.push({0,source});

    while(!pq.empty())
    {
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        if(d>dist[u]) continue;

        for(auto edge:graph[u])
        {
            int v=edge.first;
            int w=edge.second;

            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;

        graph[u].push_back({v,w});
        graph[v].push_back({u,w}); // undirected
    }

    int source;
    cin>>source;

    dijkstra(source,n);

    for(int i=0;i<n;i++)
        cout<<"Distance from "<<source<<" to "<<i<<" = "<<dist[i]<<endl;
}