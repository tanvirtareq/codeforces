#include<bits/stdc++.h>
#define md 998244353
#define MX 600000
#define dbg(a) cout<<#a<<" "<<a<<endl
#define ll long long
using namespace std;
ll n, k, m, x, y, l;
vector<pair<ll, pair<ll, ll> > > v;

vector<ll> mx,fc;

ll dpt(ll state, ll lst0)
{
    if(mx[state-1]!=0 and lst0<mx[state-1])
    {
        return 0;
    }
    if(state>n)
    {

        return 1;
    }

    if(fc[state]==1)
        return dpt(state+1, lst0);

    ll p=dpt(state+1, lst0);
    ll q=dpt(state+1, state);

    return (p+q)%md;

}

ll dp[MX]; /**  */

ll dpt()
{
    dp[0]=0;
    ll j=0;
    ll ck=0;
    for(ll i=1; i<=n; i++)
    {
        if(j==0)
        {
            if(fc[i])
            {
                dp[i]=dp[i-1];
                j=max(j, mx[i]);
            }
            else
            {
                if(ck==0)
                {
                    ck=1;
                    dp[i]=(dp[i-1]+1)%md;
                    j=max(j, mx[i]);
                }
                else
                {
                    ll cur=(dp[i-1]+1)%md;
                    dp[i]=(dp[i-1]+cur)%md;
                    j=max(j, mx[i]);
                }
            }
        }
        else
        {
            if(fc[i])
            {
                dp[i]=dp[i-1];
                j=max(j, mx[i]);
            }
            else
            {
                if(ck==0)
                {
                    ck=1;
                    dp[i]=(dp[i-1]+1)%md;
                    j=max(j, mx[i]);
                    continue;
                }
                ll cur=dp[i-1];
                cur=((cur-dp[j-1])%md+md)%md;
                dp[i]=(dp[i-1]+cur)%md;
                j=max(j, mx[i]);
            }
        }
    }
    if(j==0) dp[n]=(dp[n]+1)%md;
    else dp[n]=((dp[n]-dp[j-1])%md+md)%md;
    return dp[n];
}

ll f(ll ps)
{
    vector<ll> tmp(n+10);

    mx.clear();
    fc.clear();
    mx.resize(n+10);
    fc.resize(n+10);
    for(auto it:v)
    {
        x=it.first;
        y=it.second.first;
        l=it.second.second;


        if(l&(1<<ps))
            tmp[x]++, tmp[y+1]--;

        else
            mx[y]=max(mx[y], x);
    }
    for(ll i=1; i<=n; i++)
    {
        fc[i]=(tmp[i]>0);
        tmp[i+1]+=tmp[i];
    }
    return dpt();
}

int main()
{
    cin>>n>>k>>m;
    while(m--)
    {
        cin>>x>>y>>l;
        v.push_back({x, {y, l}});
    }
    sort(v.begin(), v.end());
    ll ans=1;
    for(ll i=0; i<k; i++)
    {
        ans=(1LL*ans*f(i))%md;
    }
    cout<<ans<<endl;

    return 0;
}

/**
4 3 2
1 3 3
3 4 6

5 2 3
1 3 2
2 5 0
3 3 3

6 1 2
1 4 0
3 6 0

6 1 2
1 4 0
3 6 0

*/
