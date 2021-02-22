#include<bits/stdc++.h>
using namespace std;
string rotate(string s,int times){
	int n=s.length();
	char ar[n];
	for(int i=0;i<n;i++) ar[i]=s[i];

	while(times--){
		char c=ar[n-1];
		for(int i=n-1;i>=0;i--) ar[i]=ar[i-1];
		ar[0]=c;
	}
	string te;
	for(int i=0;i<s.length();i++){
		te.push_back(ar[i]);
	}
	return te;
}
int main(){
	string s,res;
	getline(cin,s);
	int n;
	cin>>n;
	stringstream ss(s);
	do{
		string str;
		ss>>str;
		int t=n;
		res+=rotate(str,n)+" ";
	}while(ss);
	cout<<res;
}
