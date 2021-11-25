#include<bits/stdc++.h>

using namespace std;

int a[200000], dp[200000];
int main()
{
    int n;
    cin>>n;
    int mx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i]=a[i];
    }
    sort(dp+1, dp+n+1);
    for(int i=1;i<=n;i++) mx+=(dp[i]!=a[i]);
    if(mx<=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

