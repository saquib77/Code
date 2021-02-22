#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPrime(ll n){
	ll i;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	ll t,dp[1000001],i,count=0;
	cin>>t;
	dp[0]=dp[1]=0;
	for(i=2;i<=1000000;i++){
		if(isPrime(i)) count++;
		dp[i]=count;
	}
	while(t--){
		ll x,y;
		cin>>x>>y;
		(dp[x]<=y?cout<<"Chef\n":cout<<"Divyam\n");
	}
	return 0;
}
