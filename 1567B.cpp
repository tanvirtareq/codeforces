#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll x[400000];

void solve()
{
	ll a, b;
	cin>>a>>b;
	ll xr=x[a-1];
	if(xr==b)
	{
		cout<<a<<endl;
		return;
	}
	ll c=xr^b;
	if(c!=a)
	{
		cout<<a+1<<endl;
		return;
	}
	cout<<a+2<<endl;
}

int main()
{
	x[0]=0;
	for(int i=1;i<=300000;i++) x[i]=(x[i-1]^i);
	int t=1;
	cin>>t;
	// cout<<t<<endl;
	// int cs=1;
	while(t--)
	{
		// cout<<"Case #"<<cs++<<": ";
		solve();
	}
	return 0;
}