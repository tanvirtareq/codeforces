#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,m, k;
	cin>>n>>m>>k;
	ll X[n], Y[m];
	map<ll,ll> mpx, mpy;
	for(int i=0;i<n;i++) cin>>X[i], mpx[X[i]]=1;
	for(int i=0;i<m;i++) cin>>Y[i], mpy[Y[i]]=1;
	std::vector<pair<ll, ll> > vx, vy;
	for(int i=0;i<k;i++)
	{
		ll x, y;
		cin>>x>>y;
		if(mpx[x] and mpy[y]) continue;
		if(mpx[x]) vx.push_back({x, y});
		else if(mpy[y]) vy.push_back({x, y});
	}
	ll ct=0;
	sort(vx.begin(),vx.end(), [](pair<ll, ll> p, pair<ll, ll> q){
		return p.second<q.second;
	} );
	set<pair<ll, ll> > xx;
	map<ll, ll> mpxx;
	for(int i=0;i<vx.size();i++)
	{
		// cout<<vx[i].first<<" "<<vx[i].second<<endl;
		if(xx.size()==0)
		{
			xx.insert({vx[i].second, vx[i].first});
			mpxx[vx[i].first]++;
			continue;
		}
		ll id=(lower_bound(Y, Y+m, vx[i].second)-Y)-1;
		ll lg=Y[id];
		while(xx.size() and lg>(*xx.begin()).first)
		{
			auto tmp=*xx.begin();
			mpxx[tmp.second]--;
			xx.erase(tmp);
		}
		if(xx.size()==0)
		{
			xx.insert({vx[i].second, vx[i].first});
			mpxx[vx[i].first]++;
			continue;
		}
		ct+=xx.size()-mpxx[vx[i].first];
		xx.insert({vx[i].second, vx[i].first});
		mpxx[vx[i].first]++;
		// cout<<ct<<endl;

	}
	// cout<<ct<<endl;

	sort(vy.begin(),vy.end(), [](pair<ll, ll> p, pair<ll, ll> q){
		return p.first<q.first;
	} );
	set<pair<ll, ll> > yy;
	map<ll, ll> mpyy;
	for(int i=0;i<vy.size();i++)
	{
		// cout<<vy[i].first<<" "<<vy[i].second<<endl;
		if(yy.size()==0)
		{
			yy.insert({vy[i].first, vy[i].second});
			mpyy[vy[i].second]++;
			continue;
		}
		ll id=(lower_bound(X, X+n, vy[i].first)-X)-1;
		ll lg=X[id];
		while(yy.size() and lg>(*yy.begin()).first)
		{
			auto tmp=*yy.begin();
			mpyy[tmp.second]--;
			yy.erase(tmp);
		}
		if(yy.size()==0)
		{
			yy.insert({vy[i].first, vy[i].second});
			mpyy[vy[i].second]++;
			continue;
		}
		ct+=yy.size()-mpyy[vy[i].second];
		yy.insert({vy[i].first, vy[i].second});
		mpyy[vy[i].second]++;
		// cout<<ct<<endl;

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