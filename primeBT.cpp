#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int f,s,i;
		cin>>f>>s;
		if(f<=2){
			f=2;
			if(s>=2){
				cout<<f<<" ";
				f++;
			}
		}
		if(f%2==0) f++;
		for(int i=f;i<=s;i+=2){
			bool flag=1;
			for(j=2;j*j<=i;++j){
				if(i%j==0){
					flag=0;
					break;
				}
			}
			if(flag==1) cout<<i<<" ";
		}
	}
	return 0;
}
