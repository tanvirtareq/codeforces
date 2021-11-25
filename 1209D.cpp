#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mx 100009
ll n,m,i,j,k,l,t,arr[mx],brr[mx],par[mx];
vector<ll>v[mx];
ll find_par(ll node)
{
    return par[node]=(par[node]==node)?node:find_par(par[node]);
}
int main()
{
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++)
        par[i]=i;
    for(i=1;i<=m;i++)
    {
        scanf("%lld %lld",&j,&k);
        v[j].push_back(k);
        v[k].push_back(j);
        ll p=find_par(j);
        ll q=find_par(k);
        if(p!=q)
            par[p]=q;
    }
    for(i=1;i<=n;i++)
    {
        l=find_par(i);
        arr[l]++;
    }
    k=m;
    m=0;
    for(i=1;i<=n;i++)
    {
        if(arr[i]>0)
            m+=arr[i]-1;
    }
    printf("%lld\n",k-m);
}