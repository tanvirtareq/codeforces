#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{
	ll a, b, x;
	cin>>a>>b>>x;
	if(a>b) swap(a, b);
	while(a>0)
	{
		// cout<<a<<" "<<b<<endl;
		if(a==x or b==x or (b-x>=0 and (b-x)%a==0))
		{
			cout<<"YES"<<endl;
			return;
		}
		b%=a;
		if(a>b) swap(a, b);
	}
	cout<<"NO"<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}