#include<bits/stdc++.h>
using namespace std;
int n, tmp, odd[300000], even[300000], vis[300000], ar[300000], in[300000];
vector<int> adj[300000];
int fc=1000000;
void bfs(int rt, int b)
{
    vis[rt]=b;
    queue<int> q;
    q.push(rt);
    while(!q.empty())
    {
        int r=q.front();
        q.pop();
        for(int i=0;i<adj[r].size();i++)
        {
            if(odd[adj[r][i]]>odd[r]+1 or even[adj[r][i]]>even[r]+1)
            {
                odd[adj[r][i]]=min(odd[adj[r][i]], 1+odd[r]);
                even[adj[r][i]]=min(even[adj[r][i]], 1+even[r]);
                q.push(adj[r][i]);
                vis[adj[r][i]]=b;
            }
        }
    }
    return;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>tmp;
        ar[i]=tmp;
        if(ar[i]%2==0) odd[i]=fc, even[i]=0;
        else odd[i]=0, even[i]=fc;
        if(i-tmp>0) adj[i-tmp].push_back(i);
        if(i+tmp<=n) adj[i+tmp].push_back(i);
    }
    for(int i=1;i<=n;i++)
        if(vis[i]==0) bfs(i, 1);
    for(int i=1;i<=n;i++)
        if(vis[i]==1)  bfs(i, 0);
    for(int i=1;i<=n;i++)
    {
        if(ar[i]%2==0) (odd[i]==fc)? cout<<-1<<" " : cout<<odd[i]<<" ";
        else (even[i]==fc)? cout<<-1<<" " : cout<<even[i]<<" ";
    }
}

/**

100
10 3 10 3 5 4 10 9 9 8 7 10 3 10 8 9 7 7 8 10 7 8 3 10 4 5 10 10 3 9 10 6 9 9 7 6 10 4 3 8 7 7 3 9 9 8 7 5 4 5 3 8 4 4 5 3 9 6 9 9 6 9 3 4 5 6 5 10 5 4 6 10 3 4 4 8 8 3 9 7 8 10 6 5 8 3 4 6 8 9 8 9 4 3 10 8 8 10 7 3

3
1 1 2

*/
