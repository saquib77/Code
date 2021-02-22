#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(long i=0;i<n;i++) cin>>ar[i];

		long sum=0,maxL=0;
		for(int i=0;i<n-2;i++){
			long x=ar[i];
			long y=ar[i+1];
			long z=ar[i+2];
			sum=abs(x-y)+abs(y-z)+abs(z-x);
			maxL=max(sum,maxL);
		}
		cout<<maxL<<"\n";
	}
}
