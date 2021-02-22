#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,count=0;cin>>t;
	while(t--){
		int a,b,c,sum=0;
		cin>>a>>b>>c;
		sum=a+b+c;
		if(sum>1) count++;
	}
	cout<<count<<"\n";
	return 0;
}
