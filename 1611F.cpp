#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define nl '\n'

void solve()
{
    ll n, k;
    cin>>n>>k;
    queue<ll> q;
    ll ase=k;
    ll mx=0;
    ll l=-1, r=-1;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        ase+=x;
        q.push(x);
        while(ase<0)
        {
            ase-=q.front();
            q.pop();
        }
        if(q.size()>mx)
        {
            r=i+1;
            l=r-q.size()+1;
        }
        mx=max(mx, (ll)q.size());
    }
    if(l==-1) cout<<-1<<endl;
    else cout<<l<<" "<<r<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}