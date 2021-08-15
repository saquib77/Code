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
template <typename Map>
bool key_compare (Map const &lhs, Map const &rhs) {
    auto pred = [] (auto a, auto b) { return a.first == b.first; };
    return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin(), pred);
}
//-------------------------------------------------------------------------------------------

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto i: strs){
            string temp = i;
            sort(temp);
            mp[temp].push_back(i);
        }
        vector<vector<string>> res;
        for(auto i: mp){
            res.push_back(i.second);
        }
        return res;
    }
};

void solve(){
	int n;
    cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        strs.push_back(s);
    }
    Solution sl;
    vector<vector<string>> res = sl.groupAnagrams(strs);
    for(auto i: res){
        for(auto j : i) cout<<j<<" ";
        cout<<nl;
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
