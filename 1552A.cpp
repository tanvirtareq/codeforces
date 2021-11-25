#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string b=s;
    sort(s.begin(),s.end());
    ll ct=0;
    for(int i=0;i<n;i++) ct+=s[i]==b[i];
    // vector<pair<char, ll> > v;
    // for(int i=0;i<n;i++) v.push_back({s[i], i});
    // sort(v.begin(), v.end());
    // ll ct=0;
    // for(int i=0;i<n;i++) ct+=i==v[i].second;
    cout<<n-ct<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    ll cs=0;
    while(t--)
    {

        solve();
    }

    return 0;
}