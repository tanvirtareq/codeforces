#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n+10];
		int f=0;
		map<int, int> mp;
		for(int i=1;i<=n;i++)
		{
			cin>>ar[i];
			if(mp[ar[i]]==0) 
			{
				mp[ar[i]]=i;
				continue;
			}
			else 
			{
				if(i-mp[ar[i]]>1) f=1;
			}
			
		}
		if(f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}


	return 0;
}