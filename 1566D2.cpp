#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

// Header files, namespaces,
// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
  
#define ordered_set tree<pair<ll, ll> , null_type,less<pair<ll, ll> >, rb_tree_tag,tree_order_statistics_node_update>


void solve()
{
	ll n, m;
	cin>>n>>m;
	ll ct=0;
	ordered_set ost[400];
	std::vector<pair<ll, ll> > v;
	vector<ll> vv;
	for(int i=0;i<n*m;i++)
	{
		ll x;
		cin>>x;
		v.push_back({x, i});
		vv.push_back(x);
	}
	vector<pair<ll,ll> > rnk(n*m);
	sort(v.begin(), v.end());
	ll nibo=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			rnk[v[nibo].second]={i, j};
			nibo++;
		}
	}
	for(int i=0;i<vv.size();i++){
		ll x=vv[i];
		ll xx=rnk[i].first;
		ll yy=rnk[i].second;
		// cout<<xx<<" "<<yy<<endl;
		ct+=ost[xx].order_of_key({x, -1});
		ost[xx].insert({x, i});
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