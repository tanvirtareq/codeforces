#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n;
	cin>>n;
	ll ct=0;
	for(int i=0;i<2*n;i++)
	{
		ll x;
		cin>>x;
		ct+=x%2;
	}
	if(ct==n) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}