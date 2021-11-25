#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ii pair<int, int>
#define iii pair<int,ii>
#define MX 400000
using namespace std;

int dp[MX], ttm[MX];

int main()
{
    fast;
    int n, m;
    cin>>n>>m;
    vector<iii> e(m);
    for(auto &it:e)
    {
        cin>>it.second.first>>it.second.second>>it.first;
    }
    sort(e.begin(), e.end());
    for(int i=0;i<m;i++)
    {
        int w=e[i].first;
        for(int j=i;j<m and w==e[j].first;j++)
        {
            int xx=e[j].second.first;
            int yy=e[j].second.second;
            ttm[xx]=dp[xx];
            ttm[yy]=dp[yy];
        }
        int j=i;
        for( ;j<m and w==e[j].first;j++)
        {
            int xx=e[j].second.first;
            int yy=e[j].second.second;
            dp[yy]=max(dp[yy], ttm[xx]+1);
        }
        i=j-1;
    }
    int ans=0;
    for(int i=0;i<MX;i++)
        ans=max(ans, dp[i]);
    cout<<ans;

    return 0;
}
