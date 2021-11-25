#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007
void solve()
{
	ll n, m, k;
	cin>>n>>m>>k;
	if(m<n-1)
	{
		cout<<"NO"<<endl;
		return;
	}
	if(2*m>n*(n-1))
	{
		cout<<"NO"<<endl;
		return;
	}
	if(n==1)
	{
		if(k-1>0)
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		return;
	}
	if(n==2)
	{
		if(k-1>1)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		return;
	}
	ll dm=2;
	if(2*m==n*(n-1))
	{
		dm=1;
	}
	if(k-1>dm)
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;


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