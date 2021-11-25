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
	std::vector<ll> v;
	v.push_back(1);
	ll s=1;
	ll ct=3;
	while(v.back()<=5000)
	{
		s+=ct;
		ct+=2;
		v.push_back(s);
	}
	while(t--)
	{
		ll s;
		cin>>s;
		cout<<(lower_bound(v.begin(), v.end(), s)-v.begin()+1)<<endl;
	}

	return 0;
}