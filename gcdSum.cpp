#include<bits/stdc++.h>
using namespace std;
long long int gcd_Sum(long long int n){
	long long int sum=0,m=n;
	while(m>0){
		sum+=m%10;
		m/=10;
	}
	long long int gcd = __gcd(n,sum);
	return gcd;
}
int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n,res,m;
		cin>>n;
		if(gcd_Sum(n)!=1) cout<<n<<endl;
		else if(gcd_Sum(n+1)!=1) cout<<n+1<<endl;
		else if(gcd_Sum(n+2)!=1) cout<<n+2<<endl;
	}
	return 0;
}
