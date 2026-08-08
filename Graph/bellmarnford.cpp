#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int u,v,w;
};

int main()
{
    int V,E;

    cin>>V>>E;

    vector<Edge> edges;

    for(int i=0;i<E;i++)
    {
        Edge e;

        cin>>e.u>>e.v>>e.w;

        edges.push_back(e);
    }

    vector<int> dist(V,INT_MAX);

    dist[0]=0;

    for(int i=1;i<V;i++)
    {
        for(auto e:edges)
        {
            if(dist[e.u]!=INT_MAX &&
               dist[e.u]+e.w<dist[e.v])
            {
                dist[e.v]=dist[e.u]+e.w;
            }
        }
    }

    bool negative=false;

    for(auto e:edges)
    {
        if(dist[e.u]!=INT_MAX &&
           dist[e.u]+e.w<dist[e.v])
        {
            negative=true;
        }
    }

    if(negative)
        cout<<"Negative Cycle Found";
    else
    {
        for(int x:dist)
            cout<<x<<" ";
    }
}