#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


void solve()
{
	ll n;
	cin>>n;
	std::vector<ll> v[n];
	for(int i=0;i<n;i++)
	{
		ll c;
		cin>>c;
		while(c--)
		{
			ll x;
			cin>>x;
			v[i].push_back(x);
		}
	}
	map<vector<ll>, ll> mp;
	ll m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		vector<ll> tm;
		for(int j=0;j<n;j++)
		{
			ll x;
			cin>>x;
			x--;
			tm.push_back(x);
		}
		mp[tm]=1;
	}
	vector<ll> ans;
	for(int i=0;i<n;i++)
	{
		ans.push_back(v[i].size()-1);
	}
	if(mp[ans]==0)
	{
		for(auto it:ans) cout<<it+1<<" ";
		cout<<endl;
		return;
	}
	set<pair<ll, vector<ll> > > st;
	for(int i=0;i<n;i++)
	{
		ll cost=0;
		if(ans[i]==0) continue;
		ans[i]--;
		cost+=v[i].back()-v[i][ans[i]];
		st.insert({cost, ans});
		ans[i]++;
	}
	while(st.size())
	{
		ll cost=(*st.begin()).first;
		ans=(*st.begin()).second;
		st.erase(st.begin());
		if(mp[ans]==0)
		{
			for(auto it:ans) cout<<it+1<<" ";
			cout<<endl;
			return;
		}
		for(int i=0;i<n;i++)
		{
			if(ans[i]==0) continue;
			ans[i]--;
			cost+=v[i][ans[i]+1]-v[i][ans[i]];
			st.insert({cost, ans});
			cost-=v[i][ans[i]+1]-v[i][ans[i]];
			ans[i]++;
			
		}
	}
	return;

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