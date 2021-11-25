#include<bits/stdc++.h>

#define dbg(a) cout<<#a<<" "<<a<<endl
#define pb push_back
#define mk make_pair
#define md 1000000007

using namespace std;

typedef long long ll;
typedef long long unsigned lu;

lu x, n, csum[100], ans=1;
vector<lu> v;

lu power(lu b, lu p)
{
	if(p==0) return 1;
	if(p==1) return b%md;

	lu x=power(b, p/2)%md;
	x=(x*x)%md;
	if(p&1ULL) x=(x*b)%md;
	return x;
}

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	cin>>x>>n;

	// lu k=log2(n);
	// csum[0]=0;

	// for(int i=1;i<=k;i++)
	// {
	// 	csum[i]=csum[i-1]+i*(i+1)/2;
	// 	// cout<<csum[i]<<endl;
	// }

	lu fc=x;

	for(lu i=2;i*i<=fc;i++)
	{
		// cout<<i<<endl;
		if(fc%i==0)
		{
			v.push_back(i);
			// cout<<i<<endl;
			while(fc%i==0) fc=fc/i;
		}
	}


	if(fc!=1) v.push_back(fc);

	for(int i=0;i<v.size();i++)
	{
		lu p=v[i];

		lu p1=p;
		lu n1=n;

		while(p<=n1)
		{
			ans=(ans*power(p, n1/p))%md;
			// p1=p1*p;
			n1=n1/p;
		}

		

		// cout<<p<<endl;

		// k=log10(n)/log10(p);
		// cout<<" "<<k<<endl;
		// ans=(ans*power(p, csum[k]))%md;
	}

	cout<<ans<<endl;
	
	return 0;
}