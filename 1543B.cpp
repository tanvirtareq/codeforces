#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n;
	cin>>n;
	ll s=0;
	for(int i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		s+=x;
	}
	ll a=s/n;
	ll b=s%n;
	ll c=n-b;
	cout<<b*c<<endl;

}

int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}