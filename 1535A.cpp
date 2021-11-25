#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    pair<ll,ll> a[6];
    for(int i=1;i<=4;i++)
    {
        ll x;
        cin>>x;
        a[i]={x, i};
    }
    sort(a+1, a+5);
    if(abs(a[4].second-a[3].second)<=1)
    {
        // cout<<"ekhane"<<endl;
        ll x=a[4].second;
        ll y=a[3].second;
        // cout<<x<<" "<<y<<endl;
        if(x>y) swap(x, y);
        if(x!=2)
        {
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    else
    cout<<"YES"<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
