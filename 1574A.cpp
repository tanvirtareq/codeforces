#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'


void solve()
{
	ll n;
	cin>>n;
	// string s;
	// for(int i=0;i<n;i++)
	// {
	// 	s.push_back('(');
	// 	s.push_back(')');
	// }
	for(int i=1;i<=n;i++)
	{
		string s;
		for(int j=1;j<=i;j++)
		{
			s.push_back('(');
			s.push_back(')');
		}
		// cout<<s<<endl;
		for(int j=1;j<=n-i;j++) cout<<'(';
		cout<<s;
		for(int j=1;j<=n-i;j++) cout<<')';
		cout<<endl;
	}

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