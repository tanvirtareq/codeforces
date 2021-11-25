#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n;
	cin>>n;
	ll s=0;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	s*=2;
	if(s%n)
	{
		cout<<0<<endl;
		return;
	}
	s/=n;
	ll ct=0;
	map<ll, ll> mp;
	for(int i=0;i<n;i++)
	{
		ct+=mp[s-a[i]];
		mp[a[i]]++;
	}
	cout<<ct<<endl;
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