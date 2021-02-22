#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()<=10){
			cout<<s<<"\n";
		}else{
			char f=s[0];
			char l=s[s.length()-1];
			cout<<f<<s.length()-2<<l<<"\n";
		}
	}
	return 0;
}
