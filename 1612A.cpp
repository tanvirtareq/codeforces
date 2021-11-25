#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{

	ll x, y;
	cin>>x>>y;
	if((x+y)%2)
	{
		cout<<-1<<" "<<-1<<endl;
		return;
	}
	for(int i=0;i<=x;i++)
	{

		for(int j=0;j<=y;j++)
		{
			if(i+j==(x+y)/2)
			{
				cout<<i<<" "<<j<<endl;
				return;
			}
		}
	}
	cout<<-1<<' '<<-1<<endl;
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