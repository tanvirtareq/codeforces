#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n, m;	
	cin>>n>>m;
	ll ct=0;
	string s[n];
	for(ll i=0;i<n;i++) cin>>s[i];
	ll dp[n][m];
	for(ll i=0;i<n;i++)
	{
		ll ct=0;
		for(ll l=0;l<m;l++)
		{
			dp[i][l]=ct+(s[i][l]=='0');
			ct=dp[i][l];
		}
	}
	ll ans=INT_MAX;
	ll mnar[n];
	for(ll l=0;l<m;l++)
	{
		for(ll r=l+3;r<m;r++)
		{

			memset(mnar, 0, sizeof(mnar));
			for(ll i=1;i<4;i++)
			{
				ll x=r-1-l-dp[i][r-1]+dp[i][l];
				x+=s[i][l]=='0';
				x+=s[i][r]=='0';
				mnar[0]+=x;
				mnar[i]-=x;
			}
			ll mn=mnar[0]+dp[0][r-1]-dp[0][l];
			ll lst=0;
			for(ll i=4;i<n;i++)
			{
				while(lst<i-4)
				{
					lst++;
					mnar[lst]+=mnar[lst-1];
					mn=min(mn, mnar[lst]+dp[lst][r-1]-dp[lst][l]);
				}
				ans=min(mn+dp[i][r-1]-dp[i][l], ans);
				ll x=r-1-l-dp[i][r-1]+dp[i][l];
				x+=s[i][l]=='0';
				x+=s[i][r]=='0';
				mnar[lst+1]+=x;
				mnar[i]-=x;
				mn+=x;
				// mnar[i]+=dp[i][l+1][r-1];
			}
		}
	}
	cout<<ans<<nl;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}