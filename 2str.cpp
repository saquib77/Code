#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,s1,s2;
		cin>>s>>s1;
		int c=0,idx=0;
		for(int i=0;i<s.size();i++){
			char t=s[i];
			for(int j=idx;j<s1.size();j++){
				if(t==s1[j]){
					s2+=s1[j];
					idx=j;
					break;
				}
			}
		}
		if(s==s2) cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
}
