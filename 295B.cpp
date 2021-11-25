#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define MX 510
using namespace std;

ll ad[MX][MX], dp[MX][MX];

int main()
{
    fast;
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>ad[i][j];
            dp[i][j]=ad[i][j];
        }
    }
    vector<ll> v(n), ans(n), mp(n+10);
    for(auto &it:v) cin>>it;

//    set<int> st;

    while(v.size()>0)
    {
        int x=v.back();
        mp[x]=1;
//        st.insert(x);
        v.pop_back();
        ll s=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j) continue;
                dp[i][j]=min(dp[i][j], dp[i][x]+dp[x][j]);
                if(mp[i]==1 and mp[j]==1)
                    s+=dp[i][j];
            }
        }
        ans[v.size()]=s;
    }
    for(auto &it:ans)
        cout<<it<<" ";
    cout<<endl;

    return 0;
}

