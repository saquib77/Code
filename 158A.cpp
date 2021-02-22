#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,count=0;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}
	for(int i=0;i<n;i++){
		if(ar[i]>=ar[k-1]&&ar[i]>0) count++;
	}
	cout<<count<<"\n";
	return 0;
}
