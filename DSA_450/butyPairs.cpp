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
        int n;
        cin>>n;
        int ar[n];
        unordered_map<int,int>m;
        rep(i,0,n){
            cin>>ar[i];
            m[ar[i]] = 0;
        }
        int bP=0;
        rep(i,0,n){
            m[ar[i]]++;
        }
        for(auto [k,v] : m){
            if(v>1){
                int res = (n-v);
                res *= v;
                bP+=res;
            }else bP+=n-1;
        }
        // rep(i,0,n){
        //     rep(j,0,n){
        //         if(i!=j && (ar[i]-ar[j])/ar[i] < (ar[i]-ar[j])/ar[j])bP++;
        //     }
        // }
        cout<<bP<<nl;
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
