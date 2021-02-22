#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		int solved=0,toS=0,bot=0,rej=0,toSlow=0,solvedinOne=0;
		for(int i=0;i<n;i++){
			if(ar[i]==1||ar[i]==0) solvedinOne++;
			else if(ar[i]>1&&ar[i]<=k) solved++;
			else if(ar[i]>k) toSlow++;
		}

		if((solved+solvedinOne)<ceil(n/2)){
			cout<<"Rejected"<<"\n";
		}else rej=1;
		if(rej==1&&toSlow>=1){
			cout<<"Too Slow"<<"\n";
		}else toS=1;
		if(rej==1&&toS==1&&solvedinOne==n){
			cout<<"Bot"<<"\n";
		}else bot=1;
		if(rej==1&&toS==1&&bot==1){
			cout<<"Accepted"<<"\n";
		}
	}
}
