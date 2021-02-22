#include <iostream>
using namespace std;
int powerOf2(int n,int p,int c){
	if(n==1) return c;
	while(n!=1){
		n/=2;
		p++;
	}
	c++;
	return powerOf2(p,0,0);
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,p=0,c=0;
		cin>>n;
		cout<<powerOf2(n,p,c)<<"\n";
	}
	return 0;
}
