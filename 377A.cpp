#include<bits/stdc++.h>

using namespace std;

int dx[]={1, 0, -1, 0};
int dy[]={0,1, 0, -1};
char a[600][600];
int vis[600][600];
int n, m, k, rx, ry;
int dfs(int x, int y, int px, int py)
{
    vis[x][y]=1;
    int ct=0;
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx==px and ny==py) continue;
        if(nx>n || nx<1 || ny>m || ny<1 || vis[nx][ny]==1 || a[nx][ny]!='.') continue;
        int fc=dfs(nx, ny, x, y);
        if(k>0 and fc==0)
        {
            a[nx][ny]='X';
            k--;
        }
        else ct+=fc;
    }
    return ct;
}

int main()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.') rx=i, ry=j;
        }
    }
    dfs(rx, ry, rx, ry);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}


