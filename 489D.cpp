#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool ase[4000][4000];

int main()
{
    ll n, m;
    cin>>n>>m;

    vector<ll> ad[n+10];

    for(int i=1;i<=m;i++)
    {
        ll x, y;
        cin>>x>>y;
        ad[x].push_back(y);
        ase[x][y]=1;
    }
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j) continue;

            ll x=0;
            for(auto it:ad[i])
            {
                if(it!=i and it!=j and ase[it][j]) x++;
            }
            ans+=x*(x-1)/2;

        }
    }
    cout<<ans;

}
