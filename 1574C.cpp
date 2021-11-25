#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	ll tt=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		tt+=a[i];
	}
	sort(a, a+n);
	ll m;
	cin>>m;
	while(m--)
	{
		ll x, y;
		cin>>x>>y;
		ll id=(lower_bound(a, a+n, x)-a);
		ll id1=id-1;
		if(id>=n)
		{
			ll lg=max(0LL, x-a[id1]);
			ll baki=tt-a[id1];
			ll need=max(0LL, y-baki);
			cout<<lg+need<<endl;
		}
		else if(id==0)
		{
			ll baki1=tt-a[id];
			ll need1=max(0LL, y-baki1);
			cout<<need1<<endl;
		}
		else
		{
			ll lg=max(0LL, x-a[id1]);
			ll baki=tt-a[id1];
			ll need=max(0LL, y-baki);
			ll baki1=tt-a[id];
			ll need1=max(0LL, y-baki1);
			ll ans=min(lg+need, need1);
			cout<<ans<<endl;
		}
	}

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}