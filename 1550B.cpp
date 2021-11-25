#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll s;
	cin>>s;
	ll i=0;
	while(1)
	{
		i++;
		if(i*(i+1)+1>=s)
		{
			// i--;
			i++;
			cout<<i<<endl;
			return;
		}
	}
}

int main()
{
	ll t=1;
	cin>>t;
	ll cs=0;
	
	while(t--)
	{
		ll n, a, b;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		ll x=n*a;
		if(b>=0) x+=b*n;
		else {
			ll ct=1;
			for(int i=1;i<n;i++)
			{
				if(s[i]!=s[i-1]) ct++;
			}
			ct=(ct/2)+1;
			x+=b*ct;
		}
		cout<<x<<endl;
	}

	return 0;
}