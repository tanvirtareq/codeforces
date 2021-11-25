#include<bits/stdc++.h>

using namespace std;

int d[6000][6000];
int n,m;
vector<int> a;
int dp(int pos, int lst)
{
    if(pos>=n) return 0;
    int &rt=d[pos][lst];
    if(rt!=-1) return rt;
    int p=0, q=0;
    if(lst<=a[pos]) p=1+dp(pos+1, a[pos]);
    q=dp(pos+1 , lst);
    return rt=max(p, q);
}

int main()
{

    cin>>n>>m;
    vector<pair<double, int> > v(n);
    for(auto &it:v) cin>>it.second>>it.first;

    sort(v.begin(), v.end());
    a.resize(n);
    for(int i=0;i<n;i++) a[i]=v[i].second;
    memset(d, -1, sizeof d);
    cout<<n-dp(0, 0)<<endl;

    return 0;
}
