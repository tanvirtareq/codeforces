    #include<bits/stdc++.h>
    #define clr(a) memset(a, 0, sizeof a)
     
     
     
    using namespace std;
     
    typedef long long ll;
    typedef long long unsigned lu;
    typedef vector<ll> vi;
    typedef pair<ll, ll> pii;
    typedef priority_queue<ll> mxpqi;
    typedef priority_queue<ll, vector<ll> , greater<ll> > mnpqi;
     
     
    int main()
    {
     
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
     
        int q;
        cin>>q;
     
        while(q--)
        {
     
            int n, k;
            cin>>n>>k;
     
            string x;
            cin>>x;
            string y="RGB";
     
            int ct=INT_MAX;
     
     
            int c=0;
            int c1=0, c2=0;
     
     
            c=(x[0]!=y[0]);
            c1=(x[0]!=y[1]);
            c2=(x[0]!=y[2]);
            
            for(int i=1;i<k;i++)
            {
                c+=(x[i]!=y[i%3]);
                c1+=(x[i]!=y[(i+1)%3]);
                c2+=(x[i]!=y[(i+2)%3]);
            }
     
     
     
            ct=min(ct, c);
            ct=min(ct, c1);
            ct=min(ct, c2);
     
     
            for(int i=k;i<x.size();i++)
            {
                c=c-(x[i-k]!=y[(i-k+3)%3])+(x[i]!=y[i%3]);
                c1=c1-(x[i-k]!=y[(i+1-k+3)%3])+(x[i]!=y[(i+1)%3]);
                c2=c2-(x[i-k]!=y[(i+2-k+3)%3])+(x[i]!=y[(i+2)%3]);

                ct=min(ct, c);
                ct=min(ct, c1);
                ct=min(ct, c2);
     
     
                 // cout<<ct<<endl;
            }
     
     
     
            cout<<ct<<endl;
        }
     
     
        return 0;
    }