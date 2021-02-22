#include<bits/stdc++.h>
using namespace std;
void generate(long long f,long long l){
	if(f==l) return;
	else if(f%10!=0) cout<<f<<"\n";
	generate(f+1,l);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1) generate(1,10);
		else if(n==2) generate(11,100);
		else if(n==3) generate(111,1000);
		else if(n==4) generate(1111,10000);
		else if(n==5) generate(11111,100000);
		else if(n==6) generate(111111,1000000);
	}
	return 0;
}
