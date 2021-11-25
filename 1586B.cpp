#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007


std::vector<ll> g[100100], vis;


void solve()
{
	ll n,m;
	cin>>n>>m;
	vis.clear();
	vis.resize(n+10);
	vector<pair<ll, ll> > ans;
	// map<vector<ll>, ll> mp;
	// vector<vector<ll> > v;
	vector<ll> nibo(n+10);
	for(int i=1;i<=m;i++)
	{
		ll a, b, c;
		cin>>a>>b>>c;
		nibo[b]=1;
		// v.push_back({a, b, c});
		// vector<ll> tmp={a , b, c};
		// sort(tmp.begin(), tmp.end());
		// mp[tmp]++;
		// if(b==1)
		// {
		// 	if(vis[a]==0)
		// 	{
		// 		vis[c]=1;
		// 		ans.push_back({a, c});
		// 	}
		// 	else if(vis[c]==0)
		// 	{
		// 		vis[a]=1;
		// 		ans.push_back({a, c});
		// 	}
		// 	else
		// 	{
		// 		ans.push_back({a, c});
		// 	}
		// }
	}
	// for(auto it:mp)
	// {
	// 	if(it.second>=3)
	// 	{
	// 		for(auto bt:it.first) nibo[bt]=1;
	// 	}
	// }
	ll tp=1;
	for(int i=1;i<=n;i++)
	{
		if(nibo[i]==0)
		{
			tp=i;
			break;
		}
	}
	// for(int i=0;i<v.size();i++)
	// {
	// 	ll a=v[i][0];
	// 	ll b=v[i][1];
	// 	ll c=v[i][2];
	// 	if(b==tp)
	// 	{
	// 		if(vis[a]==0)
	// 		{
	// 			vis[c]=1;
	// 			ans.push_back({a, c});
	// 		}
	// 		else if(vis[c]==0)
	// 		{
	// 			vis[a]=1;
	// 			ans.push_back({a, c});
	// 		}
	// 		else
	// 		{
	// 			ans.push_back({a, c});
	// 		}
	// 	}
	// }
	for(int i=1;i<=n;i++)
	{
		if(i==tp) continue;
		if(vis[i]==0)
		{
			ans.push_back({tp, i});
		}
	}
	for(auto it:ans) cout<<it.first<<" "<<it.second<<endl;
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