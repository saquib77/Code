#include<bits/stdc++.h>
using namespace std;
int fibDp(int n){
	int ar[n+2];
	ar[0]=0;
	ar[1]=1;
	for(int i=2;i<=n;i++){
		ar[i]=ar[i-1]+ar[i-2];
	}
	return ar[n];
}
int fibRec(int n){
	return (n==0||n==1)?n:fibRec(n-1)+fibRec(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fibDp(n)<<"\n";
	cout<<fibRec(n)<<"\n";
	return 0;
}
