#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n, a, b;
	cin>>n>>a>>b;
	ll z=1;
	while(z<=n)
	{
		if(n-z>=0 and (n-z)%b==0)
		{
			cout<<"YES"<<endl;
			return;
		}
		if(a==1) break;
		z=z*a;
	}
	cout<<"NO"<<endl;
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