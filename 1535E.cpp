#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll av, ac;

void solve()
{
    ll q;
    cin>>q;
    ll a[q+3], c[q+3];
    cin>>a[0]>>c[0];
    ll par[q+3][20];
    par[0][0]=0;
    for(int i=1;i<20;i++)
    {
        par[0][i]=par[par[0][i-1]][i-1];
    }
    for(int i=1;i<=q;i++)
    {
        ll tp;
        cin>>tp;
        if(tp==1)
        {
            cin>>par[i][0]>>a[i]>>c[i];
            for(int j=1;j<20;j++)
            {
                par[i][j]=par[par[i][j-1]][j-1];
            }
        }
        else
        {
            ll v, w;
            cin>>v>>w;
            av=ac=0;
            ll cur=v;
            while(w)
            {
                if(a[v]==0) break;
                cur=v;
                for(int j=19;j>=0;j--)
                {
                    if(a[par[cur][j]]!=0)
                    {
                        cur=par[cur][j];
                    }
                }
                ll nibo=min(a[cur], w);
                av+=nibo;
                a[cur]-=nibo;
                w-=nibo;
                ac+=c[cur]*nibo;
                // c[cur]--;
                // cout<<i<<" "<<w<<endl;
            }
            cout<<av<<" "<<ac<<endl;
        }
    }
    return;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
