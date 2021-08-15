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

class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        for(int i=0;i<n;){
            int s = i;
            while(s<n && nums[s]==0) s++;
            int e=s;
            int c=0;
            int sn=-1,en=-1;
            while(e<n && nums[e]!=0){
                if(nums[e]<0){
                    c++;
                    if(sn==-1) sn=e;
                    en=e;
                }
                e++;
            }
            if(c%2==0) res = max(res, e-s);
            else{
                if(sn!=-1) res = max(res,e-sn-1);
                if(en!=-1) res = max(res,en-s);
            }
            i=e+1;
        }
        return res;
    }
};

void solve(){
	Solution s;
    int n;
    cin>>n;
    vector<int> v(n);
    rep(i,0,n) cin>>v[i];
    cout<<s.getMaxLen(v)<<nl;
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
