#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int x;
    int y;
};

int main()
{
    int n,m;
    cin>>n>>m;

    int grid[100][100];

    queue<Node> q;

    int fresh=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];

            if(grid[i][j]==2)
            {
                q.push({i,j});
            }

            else if(grid[i][j]==1)
            {
                fresh++;
            }
        }
    }

    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};

    int minute=0;

    while(!q.empty())
    {
        int sz=q.size();

        while(sz--)
        {
            Node cur=q.front();
            q.pop();

            for(int k=0;k<4;k++)
            {
                int nx=cur.x+dx[k];
                int ny=cur.y+dy[k];

                if(nx>=0 && nx<n && ny>=0 && ny<m &&
                   grid[nx][ny]==1)
                {
                    grid[nx][ny]=2;
                    fresh--;

                    q.push({nx,ny});
                }
            }
        }

        if(!q.empty())
            minute++;
    }

    if(fresh>0)
        cout<<-1;
    else
        cout<<minute;

    return 0;
}