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
	ordered_set ost;
	for(int i=1;i<=m;i++)
	{
		ll x;
		cin>>x;
		// cout<<x<<endl;
		ct+=ost.order_of_key({x, 0});
		ost.insert({x, i});
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