#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h,x;
	cin>>n>>h>>x;
	int ar[n];
	bool yn=false;
	for(int i=0;i<n;i++){
		cin>>ar[i];
		if(ar[i]+x==h) yn=true;
	}
	if(yn) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
