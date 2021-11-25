#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define md 1000000007

void solve()
{
	ll n, m, q;
	cin>>n>>m>>q;
	ll tt=0;
	ll dp[n+3][m+3][2];
	memset(dp, 0, sizeof(dp));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1 and j==1)
			{
				dp[i][j][0]=dp[i][j][1]=1;
				tt=1;
				continue;
			}
			dp[i][j][0]=dp[i-1][j][1]+1;
			dp[i][j][1]=dp[i][j-1][0]+1;
			tt+=dp[i][j][0]+dp[i][j][1]-1;
		}
	}
	ll ar[n+3][m+3];
	memset(ar, 0, sizeof(ar));
	// cout<<tt<<endl;
	while(q--)
	{
		ll x, y;
		cin>>x>>y;
		ll xx=1;
		ll curx=x;
		ll cury=y;
		int f=0;
		while(curx>0 and cury>0)
		{
			if(f==0)
			{
				if(cury==1 or ar[curx][cury-1]) break;
				cury--;
				// f=1;
			}
			else
			{
				if(curx==1 or ar[curx-1][cury]) break;
				curx--;
			}
			f=!f;
		}
		xx=abs(x-curx)+abs(y-cury);
		curx=x;
		cury=y;
		f=1;
		while(curx<=n and cury<=m)
		{
			if(f==0)
			{
				if(cury==m or ar[curx][cury+1]) break;
				cury++;
				// f=1;
			}
			else
			{
				if(curx==n or ar[curx+1][cury]) break;
				curx++;
			}
			f=!f;
		}
		ll yy=abs(x-curx)+abs(y-cury);
		xx++;
		yy++;
		ll ad=xx*yy;
		curx=x;
		cury=y;
		f=1;
		while(curx>0 and cury>0)
		{
			if(f==0)
			{
				if(cury==1 or ar[curx][cury-1]) break;
				cury--;
				// f=1;
			}
			else
			{
				if(curx==1 or ar[curx-1][cury]) break;
				curx--;
			}
			f=!f;
		}
		xx=abs(x-curx)+abs(y-cury);
		curx=x;
		cury=y;
		f=0;
		while(curx<=n and cury<=m)
		{
			if(f==0)
			{
				if(cury==m or ar[curx][cury+1]) break;
				cury++;
				// f=1;
			}
			else
			{
				if(curx==n or ar[curx+1][cury]) break;
				curx++;
			}
			f=!f;
		}
		yy=abs(x-curx)+abs(y-cury);
		xx++;
		yy++;
		// cout<<xx<<" "<<yy<<endl;
		ad+=xx*yy;
		ad-=1;
		if(ar[x][y]==1)
		{
			tt+=ad;
		}
		else tt-=ad;
		ar[x][y]=!ar[x][y];
		cout<<tt<<endl;
	}

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