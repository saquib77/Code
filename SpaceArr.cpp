#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++) cin>>ar[i];
		sort(ar,ar+n);
		int sum=0,flag=0;
		for(int i=0;i<n;i++){
			if((i+1-ar[i])<0){
				flag=1;
				break;
			}
			sum=sum+(i+1-ar[i]);
		}
		if(flag==1) cout<<"Second"<<endl;
		else{
			if(sum%2==1) cout<<"First"<<endl;
			else cout<<"Second"<<endl;
		}
	}
	return 0;
}
