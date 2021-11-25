#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=1;i<n;i++)
	{
		if(s[i]!=s[i-1])
		{
			cout<<i<<" "<<i+1<<endl;
			return;
		}
	}
	cout<<"-1 -1"<<endl;
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