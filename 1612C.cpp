#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{
	ll k, x;
	cin>>k>>x;
	if(k*k<=x)
	{
		cout<<2*k-1<<endl;
		return;
	}
	ll l=0, r=2*k-1;
	ll ans=l;
	while(l<=r)
	{
		ll m=(l+r)/2;
		if(m<=k)
		{
			if(m*(m+1)/2<x)
			{
				ans=m+1;
				l=m+1;
			}
			else
			{
				r=m-1;
			}
		}
		else
		{
			ll bk=m-k;
			if(k*(k+1)/2+bk*k-bk*(bk+1)/2<x)
			{
				ans=m+1;
				l=m+1;
			}
			else
			{
				r=m-1;
			}
		}
	}
	cout<<ans<<endl;
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