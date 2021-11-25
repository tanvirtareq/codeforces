#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<ll> g1[300100], g2[300100];
ll T;
vector<ll> tim[300100];

void dfs1(ll r, ll p)
{
	tim[r].push_back(++T);
	for(auto it:g2[r])
	{
		if(it==p) continue;
		dfs1(it, r);
	}
	tim[r].push_back(++T);
}

set<pair<ll, ll> > st;
ll mx;

void dfs2(ll r, ll p)
{
	vector<pair<ll, ll> > dukse, bair;
	if(st.size()==0)
	{
		st.insert({tim[r][0], tim[r][1]});
		mx=max(mx, (ll)st.size());
		for(auto it:g1[r])
		{
			if(it==p) continue;
			dfs2(it, r);
		}
		st.erase({tim[r][0], tim[r][1]});
		return;
	}
	auto up=st.upper_bound({tim[r][0], 0});
	if(up!=st.end() and (*up).second<tim[r][1])
	{
		for(auto it:g1[r])
		{
			if(it==p) continue;
			dfs2(it, r);
		}
		return;
	}
	st.insert({tim[r][0], tim[r][1]});
	// dukse.push_back(r);
	up=st.lower_bound({tim[r][0], 0});
	up=prev(up);
	if((*up).second>tim[r][0])
	{
		bair.push_back(*up);
		// if(up==st.begin()) break;
		// up=prev(up);
	}
	for(auto it:bair)
	{
		st.erase(it);
	}
	mx=max(mx, (ll)st.size());
	for(auto it:g1[r])
	{
		if(it==p) continue;
		dfs2(it, r);
	}
	for(auto it:bair)
	{
		st.insert(it);
	}
	st.erase({tim[r][0], tim[r][1]});
	return;
}

void solve()
{
	ll n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		g1[i].clear();
		g2[i].clear();
		tim[i].clear();
	}
	for(int i=2;i<=n;i++)
	{
		ll x;
		cin>>x;
		g1[x].push_back(i);
		g1[i].push_back(x);
	}
	for(int i=2;i<=n;i++)
	{
		ll x;
		cin>>x;
		g2[x].push_back(i);
		g2[i].push_back(x);
	}
	T=0;
	dfs1(1, 1);
	mx=0;
	dfs2(1 , 1);
	cout<<mx<<nl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}