#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++){
			cin>>ar[i];
		}
		int maxH=ar[0],
		int maxC=ar[0];
		for(int i=0;i<n; i++){
        		maxC=max(ar[i],maxC+ar[i]);
			maxH=max(maxH,maxC);
    		}
    		cout<<maxH<<"\n";
	}
	return 0;
}
