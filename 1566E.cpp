#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

std::set<ll> g[210000];
ll n;
ll ct;
void dfs(ll r, ll p)
{
	// cout<<r<<" "<<p<<endl;
	std::vector<ll> tmp;
	for(auto it:g[r])
	{
		
		if(it==p) continue;
		tmp.push_back(it);
	}
	for(auto it:tmp)
	{
		if(g[r].find(it)==g[r].end()) continue;
		dfs(it, r);
	}
	if(r==1)
	{
		if(g[r].size()==0) ct++;
		// ct++;
		return;
	}
	if(g[r].size()==1)
	{
		ct++;
		return;
	}
	int f=0;
	for(auto it:g[r])
	{
		if(it==p) continue;
		if(g[it].size()>1) f=1;
	}
	if(f==0)
	{
		ct--;
		g[r].erase(p);
		g[p].erase(r);
		return;
	}
	return;
}
void solve()
{
	ct=0;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		while(g[i].size()) g[i].erase(g[i].begin());
	}
	for(int i=1;i<n;i++)
	{
		ll x, y;
		cin>>x>>y;
		g[x].insert(y);
		g[y].insert(x);
	}
	
	dfs(1,1);
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