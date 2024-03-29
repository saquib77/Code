//Saquib Ahmed
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

pair<int,int> selectPackage(int truckSpace,int numPackage,vector<int>packageSpace){
    map<int,int> mp;
    int mx = INT_MIN;
    truckSpace-=30;
    vector<int> vec;
    for(int i=0;i<numPackage;i++){
        int v = packageSpace[i];
        int f = truckSpace-v;
        auto it = mp.find(f);
        if(it!=mp.end()){
            int cmx = v > truckSpace-v ? v : truckSpace-v;
            if(cmx > mx){
                mx = cmx;
                vec.push_back(mp[truckSpace-v]);
                vec.push_back(i);
            }
        }
        mp[v] = i;
    }
    return {vec[0],vec[1]};
}

void solve(){
	int trSpace=0;
    int numpk=0;
    vector<int>pkSpace;
    cin>>trSpace;
    cin>>numpk;
    rep(i,0,numpk){
        int d;cin>>d;
        pkSpace.push_back(d);
    }
    pair<int,int> p = selectPackage(trSpace,numpk,pkSpace);
    cout<<p.first<<" "<<p.second<<nl;
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
