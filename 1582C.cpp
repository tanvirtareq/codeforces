#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 998244353LL

void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	ll mn=INT_MAX;
	for(char c='a';c<='z';c++)
	{
		ll l=0, r=n-1;
		ll ct=0;
		while(l<r)
		{
			if(s[l]==s[r])
			{
				l++, r--;
			}
			else
			{
				if(s[l]==c)
				{
					ct++, l++;
				}
				else if(s[r]==c)
				{
					ct++, r--;
				}
				else
				{
					ct=INT_MAX;
					break;
				}
			}
		}
		mn=min(mn, ct);
	}
	if(mn==INT_MAX)
	{
		cout<<"-1"<<endl;
	}
	else cout<<mn<<endl;
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