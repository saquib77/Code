#include<bits/stdc++.h>
using namespace std;
int main(){
int n,f=0;
	cin>>n;
	while(n!=0){
		int k=n%10;
		cout<<"k "<<k<<" ";
		n=n/10;
		if(k==4 || k==7) continue;
		else {
			f=1;
			break;
		}
	}
	if(f) cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}
