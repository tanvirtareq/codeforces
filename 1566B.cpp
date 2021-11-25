#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{
	string s;
	cin>>s;
	ll ct=0;
	ll zr=0;
	zr=s[0]=='0';
	string b;
	b.push_back(s[0]);
	// for(i)
	for(int i=1;i<s.size();i++)
	{
		if(b.back()!=s[i]) b.push_back(s[i]);
	}
	for(int i=1;i<b.size();i++)
	{
		ct+=b[i-1]!=b[i];
		zr+=b[i]=='0';
	}
	if(ct==0)
	{
		if(s[0]=='0')
		{
			cout<<1<<endl;
		}
		else cout<<"0"<<endl;
	}
	else if(ct==1)
	{
		cout<<1<<endl;
	}
	else cout<<min(zr, 2LL)<<endl;
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