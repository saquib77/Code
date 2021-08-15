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
int a, ans = 0;
string c, b[1001];
void solve(){
	cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> c;
        if (c[0] == 'O' && c[1] == 'O' && ans == 0) {
            c[0] = '+';
            c[1] = '+';
            ans = 1;
        } else if (c[3] == 'O' && c[4] == 'O'&& ans == 0) {
            c[3] = '+';
            c[4] = '+';
            ans = 1;
        }
        b[i] = c;
    }
    if (ans == 1) {
        cout << "YES" << endl;
        for (int i = 0; i < a; i++) {
            cout << b[i] << endl;
        }
    } else {
        cout << "NO";
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
