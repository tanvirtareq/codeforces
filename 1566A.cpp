#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve()
{
	ll n, s;
	cin>>n>>s;
	if(n==1)
	{
		cout<<s<<endl;
		return;
	}
	// ll bd=n-(n)/2-1;
	// s-=((n+1)/2)-1;
	ll baki=n-((n+1)/2)+1;
	cout<<s/baki<<endl;
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