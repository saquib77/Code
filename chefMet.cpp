#include<bits/stdc++.h>
using namespace std;
int stoI(string s){
	int res=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>='0' && s[i]<='9'){
			res+=s[i]-'0';
			res*=10;
		}
	}
	return res/10;
}

int time(string s1,string m){
	int l=0;
	l=stoI(s1);
	if(l>=1200&&l<=1259&&m[0]=='A'){
		l-=1200;
		return l;
	}
        if(m[0]=='P'&& l==1200) return l;
	else if(m[0]=='P'&&l>=100&&l<=1159){
		l=stoI(s1);
		l+=1200;
	}
	return l;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s,m,res;
		cin>>s>>m;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			string s1,m1,s2,m2;
			cin>>s1>>m1>>s2>>m2;
			int l,r,met;
			l=time(s1,m1);
			r=time(s2,m2);
			met=time(s,m);
			cout<<l<<" "<<met<<" "<<r<<"\n";
			if(l<=met&&met<=r) res+="1";
			else res+="0";
		}
		cout<<res<<"\n";
	}
}
