#include<bits/stdc++.h>
#define nl '\n'
#define dbg(a) cout<<#a<<"="<<a<<nl
#define fast ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define ll long long
#define vl vector<ll>
#define pll pair<ll, ll>
#define ii pair<int,int>
#define vi vector<int>

using namespace std;

int solve()
{
    int n, k;
    cin>>n>>k;
//    k++;
    string s;
    cin>>s;
    vi v;
    int fct=0;
    vi dp(n);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') v.push_back(i);
        if(s[i]=='1') fct++;
        if(i!=0) dp[i]=dp[i-1];
        if(s[i]=='1') dp[i]++;
    }

    int i=0;
    while(i<n)
    {
        if(s[i]=='1') i=i+k+1;
        else
        {
            if(dp[i]==dp[min(i+k, n-1)])
            {
                s[i]='1';
                i=i+k+1;
            }
            else
            {
                i++;
            }
        }
    }
    int gct=0;
    for(auto it:s)
    {
        if(it=='1') gct++;
    }
    cout<<gct-fct<<endl;


//    int ct=0;
//    if(v.size()==0)
//    {
//        int x=s.size()/k;
//        if(s.size()%k!=0) x++;
//        cout<<x<<endl;
//        return 0;
//    }
//    ct+=v[0]/k;
//    if(v[0]%k!=0) ct++;
//    dbg(ct);
//    for(int i=1;i<v.size();i++)
//    {
//        int x=v[i]-v[i-1];
//        ct+=x/k;
//        dbg(x);
//        dbg(k);
//    }
//    int x=s.size()-v.back()-1;
//    ct+=x/k;
////    if(x%k!=0) ct++;
//    cout<<ct<<endl;
    return 0;
}

int main()
{

    int t;
    cin>>t;
    while(t--) solve();

    return 0;
}





