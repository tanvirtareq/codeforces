#include<bits/stdc++.h>

using namespace std;
int prm[100010];
int main()
{
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(auto &it:v) cin>>it;
    vector<int> nxt(n+2);
    nxt[n+1]=n+1;
    nxt[n]=n+1;
    
    for(int i=n-1;i>=0;i--)
    {
        int x=v[i];
        int nx=nxt[i+1];
        for(int j=2;j*j<=x;j++)
        {
            if(x%j==0)
            {
                if(prm[j]!=0)
                {
                    nx=min(nx, prm[j]);
                }
                while(x%j==0) x/=j;
                prm[j]=i;
            }
        }
        if(x!=1)
        {
            if(prm[x]!=0)
            {
                nx=min(nx, prm[x]);
            }
            prm[x]=i;
        }
        nxt[i]=nx;
    }
    int bnxt[18][n+2];
    int cnt[18][n+1];
    for(int i=0;i<n;i++) bnxt[0][i]=nxt[i];
    bnxt[0][n]=n+1;
    bnxt[0][n+1]=n+1;
    for(int j=1;j<18;j++)
    {
        for(int i=0;i<=n+1;i++)
        {
            bnxt[j][i]=bnxt[j-1][bnxt[j-1][i]];
        }
    }
    // cout<<bnxt[1][4]<<endl;
    while(q--)
    {
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        int an=1;
        for(int j=17;j>=0;j--)
        {
            if(bnxt[j][l]>r) continue;
            an+=(1<<j);
            l=bnxt[j][l];
            // cout<<j<<" "<<l<<endl;
        }
        cout<<an<<endl;
    }

    return 0;
}