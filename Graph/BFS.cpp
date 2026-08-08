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
int visited[100]={0};
    int queue[100];
    int front=0;
    int rear=0;
    int start=0;
    visited[start]=1;
    queue[rear++]=start;

   cout<<"BFS";
   while(front<rear){
    int current=queue[front++];
    cout<<current<<" ";
    for(int i=0;i<n;i++){
        if(graph[current][i]==1&&visited[i]==0){
            visited[i]=1;
            queue[rear++]=i;
        }
    }
   }

    return 0;
}