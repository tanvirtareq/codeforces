#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define md 998244353LL

ll fct[200100];

ll pwr(ll b, ll p)
{
	if(p==0) return 1;
	ll x=pwr(b, p/2);
	x=(x*x)%md;
	if(p&1) x=(x*b)%md;
	return x;
}

void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n);
	reverse(a, a+n);
	if(a[0]==a[1])
	{
		cout<<fct[n]<<endl;
		return;
	}
	if(a[0]-a[1]>1)
	{
		cout<<0<<endl;
		return;
	}
	ll s=0;
	for(int i=1;i<n;i++) if(a[i]==a[1]) s++;
	ll ans=fct[s];
	// cout<<ans<<" ans"<<endl;
	ans=(ans*s)%md;
	// cout<<ans<<" ans"<<endl;
	ans=(ans*fct[n])%md;
	// cout<<ans<<" ans"<<endl;
	ll b=(fct[s+1])%md;
	// cout<<fct[s+1]<<endl;
	// cout<<b<<" b"<<endl;
	ans=(ans*pwr(b, md-2))%md;
	// cout<<s<<" s"<<endl;
	cout<<ans<<endl;
}

int main()
{
	fct[0]=1;
	for(ll i=1;i<=200000;i++) fct[i]=(fct[i-1]*i)%md;
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}