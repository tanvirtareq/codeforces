#include<bits/stdc++.h>

using namespace std;

#define vi vector<ll>
#define eb emplace_back
#define N 1010
#define ll long long

struct aho_corasick
{
    ll marks[N];
    ll link[N]; ///A suffix link for a vertex p is a edge that points to the longest proper suffix of the string corresponding to the vertex p.
    ll psz; ///tracks node numbers of the trie
    unordered_map<char, ll> to[N]; ///tracks the next node
    void clear()
    {
        for(ll i = 0; i < psz; i++)
            marks[i]=0, link[i] = 0, to[i].clear();
        psz = 1;
    }
    aho_corasick()
    {
        psz = N - 2;
        clear();
    }
    void add_word(string s, ll cst)
    {
        ll u = 0;
        for(char c: s)
        {
            if(!to[u].count(c))
                to[u][c] = psz++;
            u = to[u][c];
        }
        marks[u]+=cst;
    }
    void populate(ll cur) /// merging the occurrences of patterns ending at cur node in the trie
    {
        marks[cur]+=marks[link[cur]];
    }
    void push_links()
    {
        queue<ll> q;
        ll u, v, j;
        char c;
        q.push(0);
        link[0] = -1;
        while(!q.empty())
        {
            u = q.front();
            q.pop();
            for(auto it: to[u])
            {
                v = it.second;
                c = it.first;
                j = link[u];
                while(j != -1 && !to[j].count(c))
                    j = link[j];
                if(j != -1)
                    link[v] = to[j][c];
                else
                    link[v] = 0;
                q.push(v);
                populate(v);
            }
        }
    }
};
string s;
aho_corasick t;
ll dpt[1<<14][1010];
bool bl[1<<14][1010];
ll id[400010], ses[15][1010], cst[15][1010];
ll stses[400010];

bool agebairkorsi[20][1010];

void traverse(ll st, ll ed, ll cur, ll ct)
{
    agebairkorsi[ct][cur]=1;
    ll n=s.size();
    ll rt=0;
    ll scur=cur;
    for(ll i=st; i<ed; i++)
    {
        char c=s[i];
        while(cur!=-1 && !t.to[cur].count(c))
            cur=t.link[cur];
        if(cur!=-1)
            cur=t.to[cur][c];
        else
            cur=0;
        rt+=t.marks[cur];
//        cout<<rt<<endl;
    }
    ses[ct][scur]=cur;  /// ct'th seg start from scur node and ends in scur node
    cst[ct][scur]=rt;  /// cost of ct'th node if start from scur node
    return;
}

ll dp(ll pos, ll msk, ll cur)
{
    if(pos>=s.size())
        return 0;


    if(bl[msk][cur]!=0)
        return dpt[msk][cur];

    ll mx=-1e17;
    ll scur=cur;
    for(ll i=0; i<14; i++)
    {
        if(msk&(1<<i))
            continue;
        char c='a'+i;
        cur=scur;
        while(cur!=-1 && !t.to[cur].count(c))
            cur=t.link[cur];
        if(cur!=-1)
            cur=t.to[cur][c];
        else
            cur=0;
        ll ct=id[pos+1];
        if(ct!=0)
        {
            if(agebairkorsi[ct][cur]==0)
                traverse(pos+1, stses[pos+1], cur, ct);
            mx=max(mx, t.marks[cur]+cst[ct][cur]+dp(stses[pos+1] , msk|(1<<i), ses[ct][cur]));
        }
        else
            mx=max(mx, t.marks[cur]+dp(pos+1, msk|(1<<i), cur));
    }
    cur=scur;
    dpt[msk][cur]=mx;
    bl[msk][cur]=1;
//    cout<<msk<<" "<<cur<<" "<<mx<<endl;
    return mx;
}


void cal(ll st, ll ed, ll ct)
{
//    cout<<st<<"Cal"<<ed<<endl;
    for(ll i=0;i<t.psz;i++)
    {
        traverse(st, ed, i, ct); /// segments starts from i node
    }
}

void precal()
{
    ll ct=0; /// id of segments
    for(ll st=0; st<s.size(); st++)
    {
        for(ll ed=st; ed<=s.size(); ed++) /// st= initial position of the segments (doesnot contain '?'),  ed=final pos of seg (contain '?' or last pos)
        {
            if(ed==s.size())
            {
                if(st==ed) break;
                ++ct;
//                cal(st, ed, ct); /// calculate for the seg st to ed and id is ct
                id[st]=ct; /// id of the segments
                stses[st]=ed; /// ending of the segments start from st
                st=ed;
                break;
            }
            else if(s[ed]=='?')
            {
                if(st==ed)
                    break;
                ++ct;
//                cal(st, ed, ct);
                id[st]=ct;
                stses[st]=ed;
                st=ed;
                break;
            }
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k;
    cin>>k;
    while(k--)
    {
        string s;
        ll c;
        cin>>s>>c;
        t.add_word(s, c);
    }
    t.push_links();
    cin>>s;
    precal(); /// precalculating for the segment which doesnot contain '?'

    ll ans=0;
    if(s[0]=='?')
    {
        ans=dp(0, 0, 0);
    }
    else
    {
        if(agebairkorsi[1][0]==0)
            traverse(0, stses[0], 0, 1);
        ans=cst[1][0]+dp(stses[0], 0, ses[1][0]);
    }
    cout<<ans<<endl;
}

/**
4
abc -10
a 1
b 1
c 3
?b?

3
a 1
b 3
ab 4
ab

2
a 1
a 1
?

1
a -1
?????????????

1
a -1
??????????????

4
abcdef 3
bcd -2
def 2
bcde 1
bcd??

ans 1

*/


