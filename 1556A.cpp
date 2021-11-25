#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll c, d;
	cin>>c>>d;
	if(abs(c-d)%2)
	{
		cout<<-1<<endl;
		return;
	}
	if(c==0 and d==0) cout<<0<<endl;
	else if(c==d) cout<<1<<endl;
	else cout<<2<<endl;
}

int main()
{
	int t=1;
	cin>>t;
	// cout<<t<<endl;
	// int cs=1;
	while(t--)
	{
		// cout<<"Case #"<<cs++<<": ";
		solve();
	}
	return 0;
}