#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int a=0,b=0;
	int c=a,d=b;
	for(int i=0;i<s.size();i++){
		if(s[i]=='U'){
			b+=1;
		}
		else if(s[i]=='D'){
			b-=1;
		}
		else if(s[i]=='R'){
			a+=1;
		}
		else if(s[i]=='L'){
			a-=1;
		}
	}
	if(a==c && b==d) cout<<"true"<<"\n";
	else cout<<"false"<<"\n";
	return 0;
}
