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
#define fi first				  //v.fi
#define se second 				  //v.se
#define pb push_back			  //v.pb(data);
#define pf push_front			  //v.pf(data);
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
#define rall(x) (x).rbegin, (x).rend() //reverse traversal	 sort(rall(x));
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
// class Solution{
// public:
//     vector<int> solve1(vector<int>&A,vector<vector<int>>&B){
//     vector<int>res;

//     for(int i=0;i<B.size();i++){
//         int q = B[i][0];
//         int l = B[i][1];
//         int r = B[i][2];
//         if(q==1){
//             A[l-1]=r;
//         }else if(q==2){
//             int sum=0;
//             int f=0;
//             for(int i=l-1;i<=r;i++){
//                 if(f==0){
//                     sum+=A[i];
//                     f=1;
//                 }else if(f==1){
//                     if(A[i]<0)sum+=(-1)*A[i];
//                     else sum-=A[i];
//                     f=0;
//                 }
//             }
//             res.push_back(sum);
//         }
//     }
//     return res;
//     }
// };
// void solve(){
//     Solution s;
//     int n;cin>>n;
//     vector<int>ar;
//     vector<vector<int>>q;
//     for(int i=0;i<n;i++){
//         int d;cin>>d;
//         ar.push_back(d);
//     }
//     int qry;
//     cin>>qry;
//     for(int i=0;i<qry;i++){
//         vector<int>t;
//         for(int j=0;j<3;j++){
//             int d;cin>>d;
//             t.push_back(d);
//         }
//         q.push_back(t);
//     }
//     vector<int>res = s.solve1(ar,q);
//     for(auto o:res) cout<<o<<" ";
// }

void solve(){
	vector<int>ar,res;
    int n,q=0,l=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int d;cin>>d;
        ar.push_back(d);
    }
    while(cin>>q){
        cin>>l>>r;
        if(q==1){
            ar[l-1]=r;
        }else if(q==2){
            int sum=0;
            int f=0;
            for(int i=l-1;i<r;i++){
                if(f==0){
                    sum+=ar[i];
                    f=1;
                }else if(f==1){
                    if(ar[i]<0)sum+=(-1)*ar[i];
                    else sum-=ar[i];
                    f=0;
                }
            }
            res.push_back(sum);
        }
    }
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<"\n";
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
