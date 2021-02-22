#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n,d;
		cin>>n>>d;
		long long ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		long long da=0,nd=0;
		for(int i=0;i<n;i++){
			if(ar[i]>=80 || ar[i]<=9) da++;
			else nd++;
		}
		long long res=ceil((double)da/(double)d)+ceil((double)nd/(double)d);
		cout<<res<<endl;
	}
	return 0;
}
