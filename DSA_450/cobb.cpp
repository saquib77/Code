#include<bits/stdc++.h>
using namespace std;
#define int                         long long
#define tc(t)                       while(t--)
#define c2i(c)                      (c-'0')
#define nl                          "\n"
#define mp                          make_pair              
#define fr                          first				  
#define sc                          second 				  
#define pb                          push_back			  
#define pf                          push_front
#define vi                          vector<int>
#define mem0(a)                     memset(a,0,sizeof(a))
#define mem1(a)                     memset(a,-1,sizeof(a))
#define all(x)                      (x).begin(), (x).end() 
#define rall(x)                     (x).rbegin(), (x).rend()
#define rep(i,a,b)                  for(int i = a; i < b; i++)
#define cnt(str,ch)                 count(str.begin(),str.end(),ch) 
#define ers(str,index)              str.erase(str.begin()+index)
const int INF=1e18;
const int32_t M=1e9+7;
template<typename T,typename T1> T amx(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1> T amn(T &a,T1 b){if(b<a)a=b;return a;}

void solve(){
    int t;
    cin>>t;
    tc(t){
    	int n,k;
        cin>>n>>k;
        vi a(n+1);
        rep(i,1,n+1){
            cin>>a[i];
        }
        int res = -INF;
        rep(i,max(n-500,1LL),n+1){
            rep(j,i+1,n+1){
                amx(res,i*j-k*(a[i]|a[j]));
            }
        }
        cout<<res<<nl;
    }
}
signed main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
 	solve();
 	return 0;   
}
