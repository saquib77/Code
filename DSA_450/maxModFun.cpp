#include<bits/stdc++.h>
using namespace std;
//CONSTANTS
#define INF (int)1e9
#define MOD1 1000000007
#define MOD2 1000000009
//GCD
#define gcd _gcd
//SYNC WITH INPUT AND OUTPUT
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
//DATA TYPES
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
//FOR VECTOR
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
//FOR MAP, VECCTOR and OTHER STL
#define mp make_pair              //v.mp({x,y});
#define fi first                  //v.fi
#define se second                 //v.se
#define pb push_back              //v.pb(data);
#define pf push_front             //v.pf(data);
//FOR MAX AND MIN
#define MAX(a,b) a=max(a, b) 
#define MIN(a,b) a=min(a, b)
#define max(a,b) (a<b?b:a)
#define min(a,b) (a>b?b:a)
//MEMSET
#define clr(a,x) memset(a,x,sizeof(a))
//CHAR TO INT
#define char2Int(c) (c-'0')
//SORT
#define all(x) (x).begin(), (x).end() //Forward traversal    sort(all(x));
#define rall(x) (x).rbegin, (x).rend() //reverse traversal   sort(rall(x));
//FOR LOOPS
#define F(i,L,R) for (int i = L; i < R; i++)
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FF(i,L,R) for (int i = L; i > R; i--)
#define FFE(i,L,R) for (int i = L; i >= R; i--)
// COUNT AND ERASE
#define COUNT(str,ch) count(str.begin(),str.end(),ch) 
#define ERASE(str,index) str.erase(str.begin()+index) 

//TEST CASE
#define TC(t) while (t--)


int power(int a,int b,int k){
    if(b == 0) return 1;
    int ans = 1;
    int val = a;
    while(b){
        if(b%2){
            ans *= val;
            ans %= k;
        }
        val *= val;
        val %= k;
        b /= 2;
    }
    return ans;
}
void solve(){
    int m, k;
    cin >> m >> k;
    string s;
    cin >> s;
    int mod_val = 0;
    for(int i=0;i<m;i++){
        int digit = s[i] - 48;
        mod_val = (mod_val + (digit*power(10, m - i - 1, k)%k))%k;
    }
    int prev = 0;
    int answer = mod_val;
    for(int i = 0 ; i < m ; i++){
        int digit = s[i] - 48;
        mod_val = (mod_val - (digit*power(10, m - i - 1, k))%k + k)%k;
        answer = max(answer, (prev + mod_val)%k);
        prev = (prev + (digit*power(10, m - i - 2, k))%k)%k;
    }
    cout << answer << endl;
}

int main(){
    FAST;
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    solve();
    return 0;   
}
