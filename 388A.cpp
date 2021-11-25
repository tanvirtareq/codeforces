#include<bits/stdc++.h>
#define Ceil(x, y) (x/(y)+(x%(y)!=0))

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx=0;
    vector<int> mp(500);
    while(n--)
    {
        int x;
        cin>>x;
        mp[x]++;
//        mx=max(mx, Ceil(mp[x], x+1));
    }
    for(int i=0;i<=100;i++)
    {
        if(i!=0) mp[i]+=mp[i-1];
        mx=max(mx, Ceil(mp[i], i+1));
    }
    cout<<mx<<endl;

    return 0;
}
