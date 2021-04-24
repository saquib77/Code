#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int minOp=INT_MAX;
	int i=0;
	int j=1;
	while(i<n){
		bool flag=false;
		while(j<n){
			if(a[j]==a[i]){
				flag=true;
				j++;
			}
			else if(a[i]!=a[j]) break;
		}
		
		
		i++;
	}
	return 0;
}