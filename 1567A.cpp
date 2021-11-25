#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	string b=s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='U') b[i]='D';
		if(s[i]=='D') b[i]='U';
	}
	cout<<b<<endl;
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