#include<iostream>
using namespace std;

const int MAX=100;

char grid[MAX][MAX];

void dfs(int r,int c,int n,int m)
{
    if(r<0 || r>=n || c<0 || c>=m)
        return;

    if(grid[r][c]=='0')
        return;

    grid[r][c]='0';
    dfs(r+1,c,n,m);
    dfs(r-1,c,n,m);
    dfs(r,c+1,n,m);
    dfs(r,c-1,n,m);
}

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>grid[i][j];

    int island=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='1')
            {
                island++;
                dfs(i,j,n,m);
            }
        }
    }

    cout<<island<<endl;
}