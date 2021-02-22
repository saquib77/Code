#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int s,m,p;
		cin>>s>>m>>p;
		if(p%2==0){
			if(s%2==0 && m%2==0 || s%2==0 && m%2==0){
				cout<<(s+m)/p<<" "<<0<<"\n";
			}else if(s%2!=0 && m%2==0){
				s+=1; m-=1;
				cout<<(s+m)/p<<" "<<1<<"\n";
			}else if(s%2==0 && m%2!=0){
				s-=1;m+=1;
				cout<<(s+m)/p<<" "<<1<<"\n";
			}
		}else{
			if(s%2!=0 && m%2==0){
				s+=1;m-=1;
				cout<<(s+m)/p<<" "<<1<<"\n";
			}else if(s%2==0 && m%2!=0){
				s-=1;m+=1;
				cout<<(s+m)/p<<" "<<1<<"\n";
			}
		}
	}
	return 0;
}
