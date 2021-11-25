#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(),a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int ans = 0;
    for (int v: a)
        for (int i=v; i<N; i+=v) {
             int x = *(lower_bound(a.begin(), a.end(), i+v)-1);
             assert(x>=v);
             ans = max(ans, x%v);
        }
    cout<<ans<<endl;
}
