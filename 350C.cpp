#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define dbg(a) cout<<#a<<" = "<<a<<endl
#define ll long long
using namespace std;

struct tp
{
    int x, y;
    bool operator < (const tp& t) const
    {
        return (abs(x)+abs(y)<=abs(t.x)+abs(t.y));
    }
};

int main()
{
//    fast;
    vector<tp> v;
    int n;
    scanf("%d", &n);
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        int x, y;
        scanf("%d", &x);
        scanf("%d", &y);
        ct+=2;
        if(abs(x)>0) ct+=2;
        if(abs(y)>0) ct+=2;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    printf("%d\n", ct);
    for(auto it:v)
    {
        if(abs(it.x)>0)
        {
            printf("1 %d %c\n", abs(it.x), (it.x>0)?'R':'L');
        }
        if(abs(it.y)>0)
        {
            printf("1 %d %c\n", abs(it.y), (it.y>0)?'U':'D');
        }
        cout<<2<<endl;
        if(abs(it.x)>0)
        {
            printf("1 %d %c\n", abs(it.x), (it.x>0)?'L':'R');
        }
        if(abs(it.y)>0)
        {
            printf("1 %d %c\n", abs(it.y), (it.y>0)?'D':'U');
        }
        cout<<3<<endl;
    }
    return 0;
}

