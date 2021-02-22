#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n == 1) return 1;
	int res=fact(n-1);
	return n*res;
}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<"\n";
	return 0;
}
