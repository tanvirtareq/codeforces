/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-19 20:38:16 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-19 22:23:24
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> v;

ll ck(ll n,ll pr)
{
    ll a[n][n];
    memset(a, 0, sizeof(a));
    ll x=0;
    // ll mst=v[0];
    for(int i=0;i<n;i+=2)
    {
        for(int j=1;j<n;j+=2)
        {
            if(x==v.size()) break;
           a[i][j]=v[x++];
        }
    }
    for(int i=0;i<n;i+=2)
    {
        for(int j=0;j<n;j+=2)
        {
            if(x==v.size()) break;
            a[i][j]=v[x++];
        }
    }
    for(int i=1;i<n;i+=2)
    {
        for(int j=0;j<n;j+=2)
        {
            if(v.size()==x) break;
           a[i][j]=v[x++];
        }
    }
    // if(n%2==0)
    // {
    //     for(int i=0;i<n;i++) swap(a[n-2][i], a[n-1][i]);
    // }
    if(pr)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    // cout<<x<<endl;
    if(x<v.size()) return 0;

    // cout<<x<<endl;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            // cout<<i<<" "<<j<<endl;
            if(a[i-1][j-1]!=0 and a[i-1][j]!=0 and a[i][j-1]!=0 and a[i][j]!=0)
            {
                // cout<<1<<endl;
                // cout<<i<<" "<<j<<endl;
                return 0;
            } 
            if(a[i-1][j-1]!=0 and a[i][j]!=0 and a[i-1][j-1]==a[i][j])
            {
                // cout<<2<<endl;
                // cout<<a[i-1][j-1]<<" "<<as
                return 0;
            } 
            if(a[i][j-1]!=0 and a[i-1][j]!=0 and a[i][j-1]==a[i-1][j]) return 0;
        }
    }
    // cout<<"ok\n";
    return 1;
}

void solve()
{   
    ll n,m, k;
    cin>>m>>k;
    v.clear();
    priority_queue<pair<ll, ll> > pq;
    for(int i=1;i<=k;i++)
    {
        ll x;
        cin>>x;
        pq.push({x, i});
    }
    while(!pq.empty())
    {
        pair<ll,ll> it=pq.top();
        pq.pop();
        ll x=it.first;
        ll y=it.second;
        while(x--) v.push_back(y);
    }
    if(v.size()==1)
    {
        cout<<1<<endl;
        cout<<v[0]<<endl;
        return;
    }
    ll l=2, r=sqrt(2.0*m)+10;
    ll ans=r;
    // ck(6, 1);
    while(l<r)
    {
        ll md=(l+r)/2;
        if(ck(md, 0))
        {
            ans=md;
            r=md-1;
        }
        else l=md+1;
    }
    if(ck(l, 0)) ans=min(ans, l);
    // ck(5, 1);
    cout<<ans<<endl;
    ck(ans, 1);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        
        solve();
    }
    return 0;
}