#include<bits/stdc++.h>
#define ll long long
#define dbg(a) cout<<#a<<"= "<<a<<endl
#define vl vector<ll>
#define pll pair<ll, ll>
#define fast ios_base::sync_with_stdio(NULL); cin.tie(0); cout.tie(0)
//#define st pair<ll, pair<ll, ll> >

using namespace std;


int a[300000];

//void rc(ll l, ll r, ll id, ll st)
//{
//    if(r<l) return;
//    if((r-l+1)%2==1)
//    {
//        a[(l+r)/2]=id;
//        rc(l , (l+r)/2-1, id+st+1, st+1);
//        rc((l+r)/2+1, r, id+2+st, st+1);
//    }
//    else
//    {
//        a[(l+r-1)/2]=id;
//        rc((l+r-1)/2+1, r, id+st+1, st+1);
//        rc(l, (l+r-1)/2-1, id+st+2, st+1);
//
//    }
//    return;
//}


struct st
{
    ll x, y, z;
    st(ll a, ll b, ll c)
    {
        x=a;
        y=b;
        z=c;
    }
};

struct cmp
{
    bool operator()(st& a, st&b)
    {
        if(a.x==b.x)
        {
            if(a.y>b.y)
                return 1;
            return 0;
        }

        if(a.x<b.x)
            return 1;

        return 0;
    }
};

void bfs(ll l, ll r)
{
    int ct=1;

    priority_queue<st, vector<st>, cmp> q;

    if((r-l+1)%2==1)
    {
        ll m=(l+r)/2;
        a[m]=1;
        st fc(m-1-l, l, m-1);
        q.push(fc);
        st fc2(r-m-1, m+1, r);
        q.push(fc2);
    }
    else
    {
        ll m=(l+r-1)/2;
//        dbg(m);
        a[m]=1;
        st fc(m-1-l, l, m-1);
        q.push(fc);
        st fc2(r-m-1, m+1, r);
        q.push(fc2);
    }
    ct++;
    while(!q.empty())
    {
        st f=q.top();
        q.pop();
        ll l=f.y;
        ll r=f.z;
        if(r<l) continue;
        if((r-l+1)%2==1)
        {
            ll m=(l+r)/2;
            a[m]=ct;
            st fc(m-1-l, l, m-1);
            q.push(fc);
            st fc2(r-m-1, m+1, r);

            q.push(fc2);
        }
        else
        {
            ll m=(l+r-1)/2;
            a[m]=ct;

            st fc(m-1-l, l, m-1);

            q.push(fc);
            st fc2(r-m-1, m+1, r);
            q.push(fc2);
        }
        ct++;
    }
    return;

}

int main()
{
    fast;

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        bfs(1,n);
//        rc(1, n, 1, 0);
        for(int i=1; i<=n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }


    return 0;
}



