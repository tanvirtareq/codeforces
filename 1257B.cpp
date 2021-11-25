#include<bits/stdc++.h>

#define dbg(a) cout<<#a<<"= "<<a<<endl;
#define xd 101000

using namespace std;
typedef long long ll;

int main()
{

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x>>y;

		if(x>=y) cout<<"YES"<<endl;

		else if(x==1 and y>1) cout<<"NO"<<endl;

		else if(x==2 and y>3) cout<<"NO"<<endl;

		else if(x==3 and y>3) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	
	return 0;
}
