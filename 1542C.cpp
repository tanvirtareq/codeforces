#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcc[100];
// const ll md 1000000007ll
void solve()
{
	ll n;
	cin>>n;
	ll x=(n/2)*2;
	ll lst=2;
	for(ll i=3;i<=50;i++)
	{
		ll nw=i*lst/__gcd(i, lst);
		x=(x+((n/lst-n/nw)*i)%1000000007LL)%1000000007LL;
		lst=nw;
		// cout<<x<<endl;
	}
	if(n%2) x+=2;
	cout<<x<<endl;

}

int main()
{
	// lcc[1]=1;
	// for(ll i=2;i<=60;i++)
	// {
	// 	lcc[i]=i*lcc[i-1]/__gcd(i, lcc[i-1]);
	// }
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}