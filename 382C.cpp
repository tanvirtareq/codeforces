#include<bits/stdc++.h>
#define ll long long
#define md 1000000007
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    vector<int> v(n);
    for(auto &it:v) cin>>it;
    sort(v.begin(), v.end());
    map<ll, ll> mp;
    if(n==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n==2)
    {
        int df=v[1]-v[0];
        if(df==0)
        {
            cout<<1<<endl;
            cout<<v[0]<<endl;
            return 0;
        }
        if((v[1]+v[0])%2==0)
        {
            cout<<3<<endl;
            cout<<v[0]-df<<" "<<(v[0]+v[1])/2<<" "<<v[1]+df<<endl;
            return 0;
        }
        cout<<2<<endl;
        cout<<v[0]-df<<" "<<v[1]+df<<endl;
        return 0;
    }

    for(int i=1;i<n;i++)
    {
        mp[v[i]-v[i-1]]++;
    }
    if(mp.size()>2)
    {
        cout<<0<<endl;
        return 0;
    }
    if(mp.size()==1)
    {
        int df=v[1]-v[0];
        if(df==0)
        {
            cout<<1<<endl;
            cout<<v[0]<<endl;
            return 0;
        }
        cout<<2<<endl;
        cout<<v[0]-df<<" "<<v.back()+df<<endl;
        return 0;
    }

    int fc[3];
    int j=0;
    for(auto it:mp)
    {
        fc[j]=it.first;
        j++;
    }
    if(mp[fc[1]]>1 || 2*fc[0]!=fc[1])
    {
        cout<<0<<endl;
        return 0;
    }

    cout<<1<<endl;
    for(int i=1;i<n;i++)
    {
        int df=v[i]-v[i-1];
        if(df==fc[1])
        {
            cout<<(v[i]+v[i-1])/2<<endl;
            return 0;
        }
    }


    return 0;
}





