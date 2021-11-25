#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define dbg(a) cout<<#a<<" = "<<a<<endl

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int> v;
    set<int> st;
    for(int i=1;i<=1<<10;i++)
    {
        int mx=0;
        int j=i;
//        dbg(j);
        while(j)
        {
            mx=mx*10+(j%2==1);
//            dbg(mx);
            j=j/2;
//            dbg(j);
        }
//        dbg(mx);
        v.push_back(mx);
        st.insert(mx);
        st.insert(mx-1);
    }
//    sort(v.begin(), v.end());
//
//    int ans=(upper_bound(v.begin(), v.end() , n)-v.begin());
//    cout<<ans<<endl;
//    dbg(*st.lower_bound(n));
//    for(auto it: st)
//    {
//        cout<<it<<endl;
//    }
    int ans=distance(st.begin(), st.lower_bound(n));
    if(st.upper_bound(n)==st.lower_bound(n)) ans--;
    cout<<ans<<endl;

}

