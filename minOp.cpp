#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int count=INT_MAX;
		while(x>0){
			if(x%2==0) x+=1;
			else if(x==3||x%4==1) x-=1;
			else x+=1;
			count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}
