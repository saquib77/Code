#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef vector<int> vi;
#define ll long long
#define pb push_back
#define TC(t) while (t--)


int main(){
//	FAST
//	#ifndef ONLINE_JUDGE
//		freopen("input.txt", "r", stdin);
//		freopen("output.txt", "w", stdout);
//	#endif

	int tc;cin>>tc;
	TC(tc){
		bool flag=0;
		ll n;cin>>n;
		ll v[n];
		for(ll i=0;i<n;i++) v[i]=i+1;
		do{
			for (int i = 0; i < n; i++) { 
				if((v[i]&v[i+1])>0){
					flag=1;
				}else{
					flag=0;
					break;
				}
			}
			if(flag){
				for(int i=0;i<n;i++) cout<<v[i]<<" ";
				cout<<"\n";
			}
		}while(next_permutation(v,v+n));
	}
	return 0;
}
