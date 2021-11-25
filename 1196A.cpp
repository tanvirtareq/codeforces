#include<bits/stdc++.h>



#define v(a) vector<a>
#define p(a, b) pair<a, b>

using namespace std;

typedef long long int ll;
typedef long long unsigned lu;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef priority_queue<int> mxpqi;
typedef priority_queue<int, vector<int> , greater<int> > mnpqi;



int main()
{

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        

        ll c=0;

        ll x=3;
        while(x--)
        {
            ll y;
            cin>>y;
            c+=y;
        }
        cout<<c/2<<endl;
    }


	return 0;
}
