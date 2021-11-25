#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n, ar[3000][3000];
map<ll, ll> dg1, dg2;
vector<pair<int, int> >v;
ll fc(int tp)
{
    ll mx=0;
    int ii=0, jj=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==tp)
            {
                if(mx<=dg1[i-j]+dg2[i+j]-ar[i][j])
                {
                    ii=i;
                    jj=j;
                }
                mx=max(mx, dg1[i-j]+dg2[i+j]-ar[i][j]);
            }
        }
    }
    v.push_back({ii, jj});
    return mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        ll x;
        cin>>x;
        ar[i][j]=x;
        dg1[i-j]+=x;
        dg2[i+j]+=x;
    }
    ll c=0;
    c+=fc(0);
    c+=fc(1);
    cout<<c<<endl;
    for(auto it:v)
    {
        cout<<it.first+1<<" "<<it.second+1<<" ";
    }

    return 0;
}


