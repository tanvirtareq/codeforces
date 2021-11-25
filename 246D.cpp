#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define md 100000000
using namespace std;

set<int> ad[200000];

int main()
{
    fast;
    int n, m;
    cin>>n>>m;
    set<int> stc;
    int mp[n+10];
    for(int i=1;i<=n;i++)
    {
        int c;
        cin>>c;
        mp[i]=c;
        stc.insert(c);
    }
    for(int i=1;i<=m;i++)
    {
        int a, b;
        cin>>a>>b;
        if(mp[a]==mp[b]) continue;
        ad[mp[a]].insert(mp[b]);
        ad[mp[b]].insert(mp[a]);
    }
    int mn=*stc.begin();
    for(auto it:stc)
    {
        if(ad[mn].size()<ad[it].size()) mn=it;
    }
    cout<<mn<<endl;
}


