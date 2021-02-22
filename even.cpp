#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,count=0;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		for(int i=0;i<n;i++){
			if(abs(ar[i]-ar[i+1])%2!=0){
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
