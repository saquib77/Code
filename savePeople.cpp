#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define is insert
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define F first
#define S second
#define file ifstream fin("input.txt");ofstream fout("output.txt");
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fr(n) for(long long i=0;i<n;i++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define ALL(x) (x).begin(), (x).end()
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;

void solve()
{
    ll n,a,q,k,x;
    cin>>n;
    set<pair<ll,ll> >se;
    rep(i,1,n+1)
    {
        cin>>a;
        se.is({i,a});
    }
    cin>>q;
    fr(q){
        ll dis=0,ini;
        cin>>x>>k;
        auto it=se.lower_bound({x,0});
        while(it!=se.end() && k>0){
            if(it->S>k){
                dis+=(k*(it->F - x));
                se.is({it->F,it->S - k});
                se.erase(it);
                k=0;
            }else{
                dis+=(it->S*(it->F-x));
                k-=it->S;
                auto itr=it;
                it++;
                se.erase(itr);
            }
        }
        cout<<dis<<endl;
    }
}
int32_t main(){
    // #ifndef ONLINE_JUDGE
    // freopen("inputf.in", "r", stdin);
    // freopen("outputf.in", "w", stdout);
    // #endif
    // fast;
    ll t=1;
    cin>>t; 
    while(t--) solve();
    return 0;
}