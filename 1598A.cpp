#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n;
	cin>>n;
	string a, b;
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='1' and b[i]=='1')
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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