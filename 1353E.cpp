#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<"= "<<a<<endl
#define vl vector<ll>
#define pll pair<ll, ll>
#define fast ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0)

using namespace std;


int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> ctu(n+10), ctd(n+10), ct0(n+10), ct1(n+10);
        for(int i=n-1;i>=0;i--)
        {
            ctu[i]=ctu[i+1];
            if(s[i]=='1') ctu[i]++;
        }
        set<pair<int, int> > st[k+10];
        for(int i=0;i<k;i++)
        {
            st[i].insert({0, -1});
        }
        ll ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ctd[i]=0;
            }
            else
            ctd[i]=ctd[i-1];
            if(i<k)
            {
                ct0[i]=0;
                ct1[i]=0;
            }
            else
            {
                ct0[i]=ct0[i-k];
                ct1[i]=ct1[i-k];
            }
            st[i%k].insert({ct1[i]-ct0[i], i});
            if(s[i]=='1')
            {
                ctd[i]++;
                ct1[i]++;
            }
            else
            {
                ct0[i]++;
            }
            auto it=st[i%k].begin();
            ll fc=(*it).first;
//            dbg(i);
//            dbg(fc);

            if(s[i]=='1')
                ans=min(ans, ctd[i]-ct1[i]+ct0[i]+fc+ctu[i+1]);

        }
        if(ans==INT_MAX) ans=0;
        cout<<ans<<endl;
    }


    return 0;
}
