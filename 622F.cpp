#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define md 1000000007LL
ll fct[1010000];

ll pwr(ll b, ll p)
{
	if(p==0) return 1;
	ll x=pwr(b, p/2);
	x=(x*x)%md;
	if(p&1) x=(x*b)%md;
	return x;
}

int main()
{
	fct[0]=1;
	for(ll i=1;i<=1001000;i++) fct[i]=(fct[i-1]*i)%md;
	ll n, k;
	cin>>n>>k;
	if(k==0)
	{
		cout<<n<<endl;
		return 0;
	}
	if(n<=k+1)
	{
		ll ct=0;
		for(ll i=1;i<=n;i++)
		{
			ct=(ct+pwr(i, k))%md;
		}
		cout<<ct<<endl;
		return 0;
	}
	ll g=1;
	for(ll i=0;i<=k+1;i++)
	{
		g=(g*(n-i))%md;
	}
	// cout<<g<<endl;
	ll y=0;
	ll yn=0;
	for(ll i=0;i<=k+1;i++)
	{
		y=(y+pwr(i, k))%md;
		// cout<<y<<endl;
		ll tmp=(g*y)%md;
		// cout<<tmp<<endl;
		ll tp=((n-i)*(fct[i]))%md;
		// cout<<tp<<endl;
		tp=(tp*fct[k-i+1])%md;
		if((k-i+1)%2)
		{
			tp=(md-tp)%md;
		}
		tp=pwr(tp, md-2)%md;
		tp=(tp*tmp)%md;
		// cout<<tp<<endl;
		yn=(yn+tp)%md;
	}
	cout<<yn<<endl;
}