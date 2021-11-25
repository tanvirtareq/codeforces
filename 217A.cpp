#include<bits/stdc++.h>

using namespace std;
int a[2000][2000], vis[2000][2000];
vector<int> ax[2000], ay[2000];

void dfs(int x,int y)
{
    if(vis[x][y]==1) return;
    vis[x][y]=1;
    for(int i=0;i<ax[x].size();i++)
    {
        dfs(x, ax[x][i]);
    }
    for(int i=0;i<ay[y].size();i++)
        dfs(ay[y][i], y);
    return;
}


int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x, y;
        cin>>x>>y;
        a[x][y]=1;
        ax[x].push_back(y);
        ay[y].push_back(x);
    }
    int ct=0;
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            if(a[i][j]==1 and vis[i][j]==0)
            {
                ct++;
                dfs(i, j);
            }
        }
    }
    cout<<ct-1<<endl;
}



