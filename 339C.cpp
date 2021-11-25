#include<bits/stdc++.h>
#define dbg(a) cout<<#a<<" = "<<a<<endl

using namespace std;

struct tp
{
    int x, y, z;
    bool operator < (const tp& t) const
    {
        if(x==t.x)
        {
            if(y==t.y)
                return (z<t.z);
            return (y<t.y);
        }
        return (x<t.x);
    }
};

int main()
{
    vector<int> v;
    for(int i=1; i<=10; i++)
    {
        char ch;
        cin>>ch;
        if(ch=='1')
            v.push_back(i);
    }
    int n;
    cin>>n;
    stack<tp> q;
    map<tp, tp> mp;
    map<tp, int> vis;
    q.push({0, 0, 0});
    while(!q.empty())
    {
        tp t=q.top();
        q.pop();
//        dbg(t.x);
//        dbg(t.y);
//        dbg(t.z);
//        cout<<endl;
//        cout<<endl;
        if(t.z==n)
        {
            cout<<"YES"<<endl;
            vector<int> vl;

            while(t.y!=0)
            {
                vl.push_back(t.y);
                t=mp[t];
            }
            reverse(vl.begin(), vl.end());
            for(auto it:vl)
                cout<<it<<" ";
            cout<<endl;
            return 0;
        }

        for(int i=v.size()-1;i>=0;i--)
        {
            auto it=v[i];
            if(it==t.y)
                continue;
            if(t.x<=0)
            {
                int nw=t.x+it;
//                if(it==3)
//                {
//                    dbg(nw);
//                    int x=vis[ {nw, it, t.z+1}];
//                    dbg(x);
//                }
                if(nw>0 and vis[ {nw, it, t.z+1}]==0)
                {
                    q.push({nw, it, t.z+1});
                    mp[ {nw, it, t.z+1}]=t;
                    vis[ {nw, it, t.z+1}]=1;
//                    dbg(q.top().x);
//                    dbg(q.top().y);
//                    dbg(q.top().z);
//                    cout<<endl;
                }
            }
            else
            {
                int nw=t.x-it;
                if(nw<0 and vis[ {nw, it, t.z+1}]==0)
                {
                    q.push({nw, it, t.z+1});
                    mp[ {nw, it, t.z+1}]=t;
                    vis[ {nw, it, t.z+1}]=1;
                }
            }
        }
    }
    cout<<"NO"<<endl;

    return 0;
}
