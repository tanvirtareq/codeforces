#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 998244353LL

void solve()
{
	ll a, b, c;
	cin>>a>>b>>c;
	// c%=2, b%=2, a%=2;
	ll tt=a+2*b+c*3;
	cout<<tt%2<<endl;
	// ll t2=(tt+1)/2;
	// while(t2)
	// {

	// }
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