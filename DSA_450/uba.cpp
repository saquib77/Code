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
	int t,n,a;
    cin>>t;
    tc(t){
        cin>>n;
        vector<int>freq(n+1),idx(n+1);
        for(int i=0; i<n; i++){
            cin>>a;
            freq[a]++;
            idx[a] = i+1;
        }
        int index = -1;
        for(int i=0; i<=n; i++){
            if(freq[i] == 1){
                index = idx[i];
                break;
            }
        }
        cout<<index<<nl;
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
