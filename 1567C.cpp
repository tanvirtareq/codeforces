#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
	string s;
	cin>>s;
	ll tt=0;
	reverse(s.begin(), s.end());
	for(ll i=0;i<(1LL<<s.size());i++)
	{
		ll ct=1;
		ll f=0;
		for(int j=0;j<s.size();j++)
		{
			ll banabo=s[j]-'0';
			if(i&(1LL<<j)) banabo+=10;
			if(j>=2 and (i&(1LL<<(j-2)))) banabo--;
			if((i&(1LL<<j)) and s.size()-j<=2)
			{
				f=0;
				break;
			}
			ll nibo=0;
			for(int i=0;i<min(10LL, banabo+1);i++)
			{
				if(banabo-i<10) nibo++;
			}
			if(nibo==0)
			{
				f=0;
				break;
			}
			f=1;
			ct*=nibo;
			// cout<<"j "<<j<<" "<<nibo<<" "<<banabo<<endl;;
		}
		// cout<<i<<" "<<ct<<" "<<f<<endl;
		if(f) tt+=ct;
	}
	tt-=2;
	cout<<tt<<endl;
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