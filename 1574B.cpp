#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


void solve()
{
	ll a, b, c, m;
	cin>>a>>b>>c>>m;
	ll mx=max(a, max(b, c));
	ll n=a+b+c;
	ll mn=max(0LL, 2*mx-1-n);
	mx=n-3;
	if(mn<=m and m<=mx) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

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