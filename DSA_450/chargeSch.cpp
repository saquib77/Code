#include<bits/stdc++.h>
using namespace std;
#define nl                          "\n"
#define int                         long long
#define tc(t)                       while(t--)
#define c2i(c)                      (c-'0')
#define mp                          make_pair              
#define fr                          first                 
#define sc                          second                
#define pb                          push_back             
#define pf                          push_front
#define sort(x)                     sort(begin(x),end(x));
#define mem0(a)                     memset(a,0,sizeof(a))
#define mem1(a)                     memset(a,-1,sizeof(a))
#define all(x)                      (x).begin(), (x).end() 
#define rall(x)                     (x).rbegin(), (x).rend()
#define rep(i,a,b)                  for(int i = a; i < b; i++)
#define cnt(str,ch)                 count(str.begin(),str.end(),ch) 
#define ers(str,index)              str.erase(str.begin()+index)
const int INF=1e18;
const int32_t M=1e9+7;
const int32_t MM=998244353;
template<typename T,typename T1> T amx(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1> T amn(T &a,T1 b){if(b<a)a=b;return a;}
//-------------------------------------------------------------------------------------------

void solve(){
	int t;
    cin>>t;
    tc(t){
        int n,count=0,l=0,r;
        cin>>n;
        vector<pair<pair<int,int>,int>>ar(n);
        vector<int>res;
        rep(i,0,n){
            int d;
            cin>>d;
            ar[i].fr.fr=d;
        }
        rep(i,0,n){
            int d;
            cin>>d;
            ar[i].fr.sc=d;
            ar[i].sc=i+1;
        }
        sort(ar);
        int c=0;
        rep(i,0,ar.size()){
            if(ar[i].fr.fr>ar[i].fr.sc) continue;
            if(i==0){
                r = ar[i].fr.fr;
                res.pb(ar[i].sc);
                res.pb(l);
                res.pb(r);
                l=r;
                count++;
                continue;
            }
            if(ar[i].fr.sc-l >= ar[i].fr.fr){
                r = ar[i].fr.fr+l;
                res.pb(ar[i].sc);
                res.pb(l);
                res.pb(r);
                l=r;
                count++;
            }
        }
        cout<<count<<nl;
        rep(i,0,res.size()){
            cout<<res[i]<<" ";
            if((i+1)%3==0) cout<<nl;
        }
    }
}

//-------------------------------------------------------------------------------------------
signed main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr); 
    #endif 
    solve();
    return 0;   
}
