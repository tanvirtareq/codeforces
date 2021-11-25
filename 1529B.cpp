
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{   
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a, a+n);
    ll mx=INT_MAX;
    ll tt=0;
    if(a[0]<=0) tt++;
    for(int i=1;i<n;i++)
    {
        if(a[i]>0) break;
        mx=min(mx, abs(a[i]-a[i-1]));
        tt++;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0) continue;
        if(a[i]<=mx)
        {
            tt++;
            break;
        }
    }
    cout<<tt<<endl;
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