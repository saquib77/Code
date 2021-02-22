#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,j;
	cin>>t;
	while(t--){
		int n,k,i,sum=0;
		cin>>n>>k;
		for(i=1;i<=n;){
			if(k==0 || k==n) break;
			if(sum+1<=i && k>0){
				a[i]=i;
				sum+=i;
				i++;k--;continue;
			}
			if(sum>i){
				a[i]=-i;
				sum-=i;
				i++;
				if(sum>0)k--;
				continue;
			}
			if(sum+1>i+1 && k==1){
				a[i]=-i;
				i++;
				if(sum-i>0) break;
				else{
					sum-=i;continue;
				}
			}
			if(sum+i>i+1 && k>1){
				a[i]=i;
				if(sum>0)k--;
				sum+=i;i++;
			}
		}
		if(k==n){
			for(i=1;i<=n;i++) a[i]=i;
		}else if(i<=n){
			for(;i<=n;i++) a[i]=-1;
		}
		for(i=1;i<=n;i++) cout<<a[i]<<endl;
	}
	return 0;
}
