#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll a, b;
	cin>>a>>b;
	if(a==b)
	{
		cout<<"0 0"<<endl;
		return;
	}
	if(a<b) swap(a, b);
	ll g=abs(a-b);
	ll x=b/g;
	ll y=min(abs(x*g-b), abs((x+1)*g-b));
	cout<<g<<" "<<y<<endl;

}

int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}