#include<bits/stdc++.h>
#define f(i, n) for(int i=1;i<=n;i++)
#define pb(a) push_back(a) 

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef pair<int, int> ii;



int main()
{

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n,m;
	cin>>n>>m;

	vi v;
	f(i, n)
	{
		int x;
		cin>>x;
		int rm=m-x;
		sort(v.begin(), v.end());
		int ct=0;
		int c=0;
		for(int i=0;i<v.size();i++)
		{
			if(ct+v[i]>rm) break;
			ct+=v[i];
			c++;
		}
		cout<<v.size()-c<<" ";
		v.pb(x);
	}


	return 0;
}

