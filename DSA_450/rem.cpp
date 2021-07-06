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
bool check(vector<int>&nums){
    int count=0;
    for (int i = 1; i < nums.size(); ++i)
    {
        if(nums[i-1]<nums[i]) count++;
    }
    for (int i = 0; i < nums.size(); ++i)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    if(count==nums.size()-1) return true;
    return false;
}
bool canBeIncreasing(vector<int>& nums) {
    int count=0;
    vector<int>temp;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(i!=j) temp.push_back(nums[j]);
        }
        if(check(temp)) return true;
        temp.clear();
    }
    return false;

}
void solve(){
	int n;
    cin>>n;
    vector<int>temp;
    for (int i = 0; i < n; ++i)
    {
        int d;cin>>d;
        temp.push_back(d);
    }
    int res = canBeIncreasing(temp);
    if(res) cout<<"true\n";
    else cout<<"false\n";
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
