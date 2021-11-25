#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{
	ll n;
	cin>>n;
	string a, b;
	cin>>a>>b;
	ll ct=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i]) ct+=2;
		else if(a[i]=='0')
		{
			if(i+1<n and a[i+1]==b[i+1] and a[i+1]=='1')
			{
				ct+=2;
				i++;
			}
			else ct++;
		}
		else if(a[i]=='1')
		{
			if(i+1<n and a[i+1]==b[i+1] and a[i+1]!='1')
			{
				ct+=2;
				i++;
			}
		}
	}
	cout<<ct<<endl;
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