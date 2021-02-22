#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
int main(){
	int m,sum1=0,sum;
	cin>>m;
	int ar[m];
	for(int i=0;i<m;i++){
		cin>>ar[i];
		sum+=ar[i];
	}
	int q;
	cin>>q;
	unordered_map<int,int>mp(q);
	while(q--){
		int n;
		cin>>n;
		if(n==1) cout<<sum1<<"\n";
		for(int i=0;i<m;i++){
			for(int j=i;j<n;j++){
				)
			}
		}
		cout<<sum<<"\n";
	}
}
