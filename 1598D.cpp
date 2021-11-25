#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007


void solve()
{
	ll n;
	cin>>n;
	ll ct=0;
	map<ll , ll> mp1, mp2;
	pair<ll ,ll> pr[n+10];
	for(int i=1;i<=n;i++){
		ll a, b;
		cin>>a>>b;
		mp1[a]++;
		mp2[b]++;
		pr[i]={a, b};
	}
	for(int i=1;i<=n;i++)
	{
		ll x=mp1[pr[i].first]-1;
		ll y=mp2[pr[i].second]-1;
		ct+=x*y;
		// cout<<i<<" "<<x<<' '<<y<<endl;
	}
	// cout<<ct<<endl;
	ll tt=n*(n-1)*(n-2);
	tt/=2;
	tt/=3;
	cout<<tt-ct<<endl;
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