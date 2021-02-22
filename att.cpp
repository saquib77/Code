#include<bits/stdc++.h>
using namespace std;
#define N 120
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;
		cin>>s;
		bitset<N>b(s);
		int abs=b.count();
		int f=N-n;
		f=f+abs;
		int res=(f*100)/N;
		cout<<res<<endl;
		if(res>=75) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
