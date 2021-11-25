#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
#define md 100000000
using namespace std;


int n1, n2, k1, k2;

int dpt[205][105][105][2][11];

int dpf(int pos, int n11, int n22 , int tp, int  nisi)
{
    if(pos>n1+n2) return 1;

    int &rt=dpt[pos][n11][n22][tp][nisi];
    if(rt!=-1) return rt;

    if(tp==0)
    {
        int p=0, q=0;
        if(nisi<k1 and n11>0) p=dpf(pos+1, n11-1, n22, 0, nisi+1);
        if(n22>0) q=dpf(pos+1, n11, n22-1, 1, 1);
        rt=(p+q)%md;
    }
    else
    {
        int p=0, q=0;
        if(nisi<k2 and n22>0) p=dpf(pos+1, n11, n22-1, 1, nisi+1);
        if(n11>0) q=dpf(pos+1, n11-1, n22, 0, 1);
        rt=(p+q)%md;
    }
    return rt;
}

int main()
{
    fast;
    memset(dpt, -1, sizeof dpt);
    cin>>n1>>n2>>k1>>k2;

    cout<<dpf(1, n1, n2, 0, 0);
}

