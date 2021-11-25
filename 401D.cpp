#include <bits/stdc++.h>
using namespace std;
string s;int k,N;
long long dp[(1<<18)+5][101];
long long f(int mask,int mod)
{
	long long &res=dp[mask][mod];
	if(res!=-1)return res;
	res=0;
	int kk=0;
	int arr[10]={0};
	for(int i=0;i<N;i++)
	{
		if(mask==0 && s[i]=='0')continue;
		if(!(mask&(1<<i)))
		{
			if(arr[s[i]-'0'])continue;
			arr[s[i]-'0']++;
			kk++;
			int a=mask;
			a|=(1<<i);
			res+=f(a,(mod*10+s[i]-'0')%k);
		}
	}
	if(kk==0)return res=(mod==0);
	return res;
}


int main(int argc, char const *argv[])
{
	cin>>s>>k;
	N=s.size();
	memset(dp,-1,sizeof dp);
	cout<<f(0,0)<<endl;
	return 0;
}