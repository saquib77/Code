#include<bits/stdc++.h>
using namespace std;

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

ll isPrime(ll n){
	ll i,j,c=0;
	bool f=false;
	FE(i,2,1000){
		f=false;
		F(j,2,i)
			if(i%j==0){ f=true; break; }

		if(!f) c++;
		if(c==n) break;
	}
	return i;
}

ll dPFib(ll n){
	ll dp[n+2];
	dp[0]=0;
	dp[1]=1;
	FE(i,2,n){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int main(){
	ll tc;cin>>tc;
	TC(tc){
		ll n;cin>>n;
		if(n%2==1) cout<<dPFib(n/2+1)<<endl;
		else cout<<isPrime(n/2)<<endl;
	}
	return 0;
}
