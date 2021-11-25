#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
ll lg[210000];
ll st[210000][23];

void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	ll b[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll j=0;j<n;j++) cin>>b[j];
	// cout<<n<<endl;
	// cout<<b[0]
	

	for (ll i = 0; i < n; i++)
	    st[b[i]/2-1][0] = i;

	// for(int i=0;i<n;i++) cout<<st[i][0]<<" ";
	// cout<<endl;

	for (ll j = 1; j <=20 ; j++)
	    for (ll i = 0; i + (1 << j) <= n; i++)
	        st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);

	ll ct=2*n;
	// cout<<ct<<endl;
	for(ll i=0;i<n;i++)
	{
		ll L=a[i]/2;
		ll R=n-1;
		// cout<<L<<" "<<R<<endl;
		ll j = lg[R - L + 1];
		ll minimum = min(st[L][j], st[R - (1 << j) + 1][j]);
		ct=min(ct, i+minimum);
		// cout<<ct<<endl;
	}
	cout<<ct<<endl;
	// for(ll i)
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lg[1] = 0;
	for (ll i = 2; i <= 200000; i++)
	    lg[i] = lg[i/2] + 1;
	ll t=1;
	cin>>t;
	// cout<<t<<endl;
	while(t--)
	{
		solve();
	}
	return 0;
}