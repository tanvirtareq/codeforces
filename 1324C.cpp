#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int mx=0;
		int ct=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='R')
			{
				mx=max(mx, ct);
				ct=0;
			}
			else ct++;
		}
		mx=max(mx, ct);
		cout<<mx+1<<endl;
	}


	return 0;
}