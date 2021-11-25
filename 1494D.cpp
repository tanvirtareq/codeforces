/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-26 15:14:26 
 * @Last Modified by:   tanvir tareq 
 * @Last Modified time: 2021-05-26 15:14:26 
 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, a[5010][5010], chld[5010], vl[20000];

vector<ll> g[20000];
vector<pair<ll, ll> > ed;

// priority_queue<ll> pq;
ll mxx=0;

ll dfs(ll rt, ll ch[], ll sz)
{
    if(sz==1)
    {
        --mxx;
        vl[ch[sz]]=chld[ch[sz]];
        return ch[sz];
    }
    ll mx=0;
    for(int i=1;i<=sz;i++)
    {
        for(int j=i+1;j<=sz;j++)
        {
            mx=max(mx, a[ch[i]][ch[j]]);
        }
    }
    vl[rt]=mx;
    vector<vector<ll> > v;
    vector<ll> tmp;
    tmp.push_back(ch[1]);
    v.push_back(tmp);
    for(int i=2;i<=sz;i++)
    {
        int f=0;
        for(auto &it:v)
        {
            if(a[it[0]][ch[i]]!=mx)
            {
                f=1;
                it.push_back(ch[i]);
                break;
            }
        }
        if(f==0)
        {
            tmp.clear();
            tmp.push_back(ch[i]);
            v.push_back(tmp);
        }
    }
    for(auto it:v)
    {
        ll chk[it.size()+1];
        ll id=0;
        for(auto bt:it) chk[++id]=bt;
        ll v=dfs(++mxx, chk, id);
        ed.push_back({v, rt});
    }
    return rt;
}

void solve()
{

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                chld[i]=a[i][i];
            }
        }
    }
    mxx=n+1;
    ll ch[n+1];
    for(int i=1;i<=n;i++) ch[i]=i;
    dfs(n+1, ch, n);
    cout<<mxx<<endl;
    for(int i=1;i<=mxx;i++) cout<<vl[i]<<" ";
    cout<<endl;
    cout<<n+1<<endl;
    for(auto it:ed) cout<<it.first<<" "<<it.second<<endl;
    return;
}

int main()
{
    int t=1;
    // cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        solve();
    }
    return 0;
}