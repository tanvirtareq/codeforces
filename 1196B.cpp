#include<bits/stdc++.h>



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

    ll q;
    cin>>q;

    while(q--)
    {
      

        ll n, k;

        cin>>n>>k;

        ll ct=0;

        std::vector<ll> v;

        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            if(x%2==1)
            {
                v.push_back(i);
                // cout<<i<<endl;
                ct++;
            }
        }

        if(ct<k)
        {
            cout<<"NO"<<endl;
        }

        else 
        {
            ll bt=ct-k;
            if(bt%2==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                for(ll i=1;i<k;i++)
                {
                    cout<<v[i-1]<<" ";
                }
                cout<<n<<endl;
                
            }
        }
        


    }

	return 0;
}
