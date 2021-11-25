#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	ll tt=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		tt+=a[i];
	}
	for(ll i=2;i*i<=tt;i++)
	{
		if(tt%i==0)
		{
			cout<<n<<endl;
			for(int j=1;j<=n;j++) cout<<j<<" ";
			cout<<endl;
			return;
		}
	}
	cout<<n-1<<endl;
	int f=0;
	for(int j=1;j<=n;j++)
	{
		if(f==1 or a[j-1]%2==0) cout<<j<<" ";
		else if(f==0)
		{
			f=1;
		}
	}
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