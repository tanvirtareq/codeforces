#include<bits/stdc++.h>

using namespace std;

int mx;
int n, m;
int gp[10][10];

int v[10];

int rc(int ps)
{
	if(ps>n)
	{

		int dvis[10][10];

		for(int i=1;i<=6;i++)
		{
			for(int j=1;j<=6;j++) dvis[i][j]=0;
		}

		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(gp[i][j])
				{
					dvis[v[i]][v[j]]=1;
					dvis[v[j]][v[i]]=1;
				}
			}
		}

		int x=0;

		for(int i=1;i<=6;i++)
		{
			for(int j=i;j<=6;j++)
			{
				x+=(dvis[i][j]>0);
			}
		}
		mx=max(mx, x);
		return 0;
	}
	for(int i=1;i<=6;i++)
	{
		v[ps]=i;
		rc(ps+1);
	}

	return 0;
}

int main()
{
	// #ifndef ONILINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	cin>>n>>m;
	// cout<<0<<endl;

	for(int i=1;i<=m;i++)
	{
		int x, y;
		cin>>x>>y;
		gp[x][y]=1;
		gp[y][x]=1;
	}

	rc(1);

	cout<<mx<<endl;


	return 0;
}