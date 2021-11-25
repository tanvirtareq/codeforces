	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long


	void solve()
	{
		ll s, n;
		cin>>s>>n;
		while(n)
		{
			ll x=s-n+1;
			// ll x=s;
			// s-=x;
			n--;
			if(n==0)
			{
				cout<<s<<endl;
				return;
			}
			string xx=to_string(x);
			for(int i=1;i<xx.size();i++) xx[i]='0';
			xx[0]='1';
			stringstream ss(xx);
			ss>>x;
			// if(x+n>s) x=s-n;
			s-=x;
			cout<<x<<" ";
		}
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