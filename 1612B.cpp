#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{
	ll n, a, b;
	cin>>n>>a>>b;
	std::vector<ll> aa, bb, cc;
	aa.push_back(a);
	bb.push_back(b);
	for(int i=1;i<=n;i++)
	{
		if(i==a or i==b) continue;
		if(i<a and i>b)
		{
			cout<<-1<<endl;
			return;
		}
		if(i<a)
		{
			bb.push_back(i);
		}
		else if(i>b)
		{
			aa.push_back(i);
		}
		else cc.push_back(i);
	}
	if(aa.size()>n/2 or bb.size()>n/2)
	{
		cout<<-1<<endl;
		return;
	}
	for(auto it:aa) cout<<it<<" ";
		// cout<<" s ";
	for(auto it:cc) cout<<it<<" ";
		// cout<<" s "; 
	for(auto it:bb) cout<<it<<" ";
	cout<<endl;
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