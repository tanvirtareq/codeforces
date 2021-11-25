#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        ll ar[n+10];
        for(int i=1;i<=n;i++) cin>>ar[i];

        int p=1;
        ll mxl[2], mx[2];
        mxl[0]=mxl[1]=0;
        mx[0]=mx[1]=0;
        ll mxx=-2000000000000000;
        ll mn=mxx;
        if(ar[1]<0) p=-1;
        for(int i=1;i<=n;i++)
        {
            if(p==1)
            {
                mxx=max(mxx, ar[i]);
                if(i==n or ar[i+1]<0)
                {
                    mx[0]+=mxx;
                    mxl[0]++;
                    p=-1;
                    mxx=mn;
                }
            }
            else{
                mxx=max(mxx, ar[i]);
                if(i==n or ar[i+1]>0)
                {
                    mx[0]+=mxx;
                    mxl[0]++;
                    p=1;
                    mxx=mn;
                }

            }
        }

        cout<<mx[0]<<endl;
    }

    return 0;
}


