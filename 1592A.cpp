#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n, h;
	cin>>n>>h;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	reverse(a, a+n);
	if(n==1)
	{
		cout<<(h+a[0]-1)/a[0]<<endl;
	}
	else
	{
		if(a[0]>=h)
		{
			cout<<1<<endl;
			return;
		}
		ll x=(h+a[0]+a[1]-1)/(a[0]+a[1]);
		ll mn=2*x;
		h-=a[0];
		x=(h+a[0]+a[1]-1)/(a[0]+a[1]);
		mn=min(mn, 2*x+1);
		cout<<mn<<endl;
	}
	// cout<<ct<<endl;
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