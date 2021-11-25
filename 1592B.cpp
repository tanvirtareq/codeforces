#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n, x;
	cin>>n>>x;
	pair<ll, ll> pr[n];
	ll a[n];
	for(int i=0;i<n;i++)
	{
		ll y;
		cin>>y;
		pr[i]={y, i};
		a[i]=y;
	}
	sort(pr, pr+n);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=pr[i].first and i-x<0 and i+x>=n)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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