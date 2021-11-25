#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n;
	cin>>n;
	ll ar[n][5];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++) cin>>ar[i][j];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			ll a=0, b=0, c=0;
			for(int k=0;k<n;k++)
			{
				if(ar[k][i] and ar[k][j]) c++;
				else if(ar[k][i]) a++;
				else if(ar[k][j]) b++;
			}
			if(a>b) swap(a, b);
			ll km=b-a;
			a+=km;
			c-=km;
			if(c<0) continue;
			a+=c/2;
			b+=c/2;
			if(a==b and a+b==n)
			{
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	cout<<"NO"<<endl;
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