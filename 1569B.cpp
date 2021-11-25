#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	char a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]='c';
			if(s[i]=='1' or s[j]=='1') a[i][j]='=';
			if(i==j) a[i][j]='X';
		}
	}
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		cout<<a[i][j];
	// 	}
	// 	cout<<endl;
	// }
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1') continue;
		int f=0;
		for(int j=0;j<n;j++)
		{
			if(i==j) continue;
			if(a[i][j]=='c' and a[j][i]=='c')
			{
				f=1;
				a[i][j]='+';
				a[j][i]='-';
				break;
			}
		}
		if(f==0)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='c' and a[j][i]=='c') 
			{
				a[i][j]=a[j][i]='=';
			}
		}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}