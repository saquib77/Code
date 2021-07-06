#include<bits/stdc++.h>
using namespace std;
long long mpow(int i,int n, int m){
    long long res =  pow(i,n);
   return res%m;
}
bool isprime(long long n){
	if(n<2) return false;
	for(long long i=2;i*i*i<=n;++i) if(n%i==0) return false;
	for(int it=0;it<1e5;++it){
		long long i = rand()%(n-1)+1;
		if(__gcd(i,n)!=1) return false;
		if(mpow(i,n-1,n)!=1) return false;
	}
	return true;
}
int main(){
    long long n;
    cin>>n;
    isprime(n) ? printf("1") : printf("0");
    return 0;
}
