#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

string msk(ll x)
{
	string s=to_string(x);
	string rt;
	for(int i=0;i<s.size();i++){
		if(s[i]=='4' or s[i]=='7') rt.push_back(s[i]);
	}
	return rt;
}

void solve()
{
	ll a;
	string b;
	cin>>a>>b;
	ll c=a+1;
	while(msk(c)!=b) c++;
	cout<<c<<endl;

}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}