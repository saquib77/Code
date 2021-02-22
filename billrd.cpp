#include<bits/stdc++.h>
using namespace std;
void swap(int a,int b){ int t=a; a=b; b=t; }
int main(){
	int t;
	cin>>t;
	while(t--){
		int N,K,x,y;
		cin>>N>>K>>x>>y;
		if(x==y) cout<<x<<" "<<y<<endl;
		if(x>y) {
			while(x!=N || y!=N){
				x++;y++;
			}
			
		}
			
	}
	return 0;
}
