#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007
void solve()
{
	ll n;
	cin>>n;
	ll ct=1;
	for(int i=3;i<=2*n;i++)
	{
		ct=(ct*i)%md;
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