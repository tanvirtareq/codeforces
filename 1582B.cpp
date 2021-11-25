#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 998244353LL

void solve()
{
	ll n;
	cin>>n;
	ll z=0,o=0;
	for(int i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		z+=x==0;
		o+=x==1;
	}
	ll tz=1;
	for(int i=1;i<=z;i++)
	{
		tz*=2;
	}
	cout<<o*tz<<endl;
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