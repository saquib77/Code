#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long f,s,tp=0;
		cin>>f>>s;
		if(f%2==0 && s%2==0){
			tp+=(f/2)*(s/2);
			tp+=(f/2)*(s/2);
		}else if(f%2!=0 && s%2!=0){
			tp+=((f+1)/2)*((s+1)/2);
			tp+=(f/2)*(s/2);
		}else if(f%2!=0 && s%2==0){
			tp+=(f/2)*(s/2);
			tp+=((f+1)/2)*(s/2);
		}else if(f%2==0 && s%2!=0){
			tp+=(f/2)*(s/2);
			tp+=(f/2)*((s+1)/2);
		}
		cout<<tp<<endl;
	}
	return 0;
}
