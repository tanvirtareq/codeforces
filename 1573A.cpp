#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


void solve()
{
	ll n;
	cin>>n;
	ll x=0;
	string s;
	cin>>s;
	for(int i=0;i<n-1;i++)
	{
		if(s[i]=='0') continue;
		x+=(s[i]-'0'+1);
		// cout<<x<<endl;
	}
	// cout<<s.back()<<endl;
	x+=(s.back()-'0');
	cout<<x<<endl;
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