#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int a=0,b=0,c=0,d=0,e=0,f=1;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			//A-Z
			if(s[i]>='A' && s[i]<='Z'){
				if(i>0 && i<s.length()) a=1;
				else a=0;
			}
			//a-z
			if(s[i]>='a' && s[i]<='z') b=1;
			//0-9
			if(s[i]>='0' && s[i]<='9'){	
				if(i!=0 && i<s.length()-1) c=1;
				else c=0;
			}
			//@ # % & ?
			if(s[i]=='@' || s[i]=='#'||s[i]=='%'||s[i]=='&'||s[i]=='?' ){
				if(i!=0 && i!=s.length()) d=1;
				else d=0;
			}
			//Length>10
			if(s.length()>=10) e=1;
			else e=0;
		}
		if(a==1 && b==1 && c==1 && d==1 && e==1){
			cout<<"YES"<<"\n";
		}else cout<<"NO"<<"\n";
	}
	return 0;
}
