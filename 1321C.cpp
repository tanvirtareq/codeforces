/*
 * @Author: tanvir tareq 
 * @Date: 2021-05-30 11:46:41 
 * @Last Modified by: tanvir tareq
 * @Last Modified time: 2021-05-30 12:08:40
 */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<ll> st;
    for (int i = 0; i < n; i++)
        st.insert(i);
    ll ct = 0;
    for (char c = 'z'; c > 'a'; c--)
    {
        while (1)
        {
            ll f = 0;
            for (int i = 0; i < n; i++)
            {
                if(st.find(i)==st.end()) continue;
                if (s[i] != c)
                    continue;
                if (st.size() == 0)
                    break;
                auto it = st.upper_bound(i);
                if (it != st.end() and s[*it] == c - 1)
                {
                    ct++;
                    st.erase(i);
                    f=1;
                }
                else if (it != st.begin())
                {
                    it = prev(it);
                    if (it != st.begin())
                    {
                        it = prev(it);
                        if (s[*it] == c - 1)
                        {
                            ct++;
                            st.erase(i);
                            f=1;
                        }
                    }
                }
            }
            // cout<<c<<" "<<f<<endl;
            if(f==0) break;
        }
    }
    cout << ct << endl;
    return;
}

int main()
{
    int t = 1;
    // cin>>t;
    for (int cs = 1; cs <= t; cs++)
    {
        solve();
    }
    return 0;
}