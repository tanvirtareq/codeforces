#include<bits/stdc++.h>
#define MX 100030
using namespace std;

int dp[MX], d[MX];

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int mx=0;
    for(auto &it:v)
    {
        cin>>it;
        dp[it]=1;
        d[it]=1;
        for(int i=2; i*i<=it; i++)
        {
            if(it%i==0)
            {
                int j=it/i;
                d[i]++;
                dp[it]=max(dp[it], d[i]);
                d[i]=d[it]=dp[it];
                if(i==j)
                    continue;
                d[j]++;
                dp[it]=max(dp[it], d[j]);
                d[j]=d[it]=dp[it];
            }
        }
        for(int i=2; i*i<=it; i++)
        {
            if(it%i==0)
            {
                int j=it/i;
                d[i]=d[j]=d[it]=dp[it];
            }
        }
        mx=max(mx, dp[it]);
    }
    cout<<mx<<endl;


    return 0;
}
