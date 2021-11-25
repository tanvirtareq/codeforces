#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		a[i]%=2;
	}
	ll b[n];
	for(int i=0;i<n;i++) b[i]=a[i];
	ll ct=0;
	ll lst=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=i%2)
		{
			lst=max(lst, i+1LL);
			while(lst<n and a[lst]!=i%2) lst++;
			if(lst==n)
			{
				ct=INT_MAX;
				break;
			}
			ct+=lst-i;
			a[lst]=a[i];
		}
	}
	// cout<<ct<<endl;
	ll ct1=0;
	lst=-1;
	for(int i=0;i<n;i++)
	{
		if(b[i]==i%2)
		{
			lst=max(lst, i+1LL);
			while(lst<n and b[lst]==i%2) lst++;
			if(lst==n)
			{
				// cout<<i<<endl;
				ct1=INT_MAX;
				break;
			}
			ct1+=lst-i;
			b[lst]=b[i];
		}
		// cout<<ct1<<endl;
	}
	// cout<<ct1<<endl;
	ct=min(ct, ct1);
	if(ct==INT_MAX) cout<<-1<<endl;
	else cout<<ct<<endl;

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