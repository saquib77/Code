#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k,d;
		cin>>n>>k>>d;
		int ar[n];
		int dys=0;
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>ar[i];
			sum+=ar[i];
		}
		cout<<sum<<endl;
		int host=sum/k;
		if(host<=d) cout<<host<<endl;
		else cout<<d<<endl;
	}
	return 0;
}
