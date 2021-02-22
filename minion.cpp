#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int kevin=0,stuart=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			kevin+=s.size()-i;
		}else{
			stuart+=s.size()-i;
		}
	}
	if(kevin==stuart) cout<<"Draw"<<"\n";
	else if(kevin>stuart) cout<<"Kevin = "<<kevin<<"\n";
	else cout<<"Stuart = "<<stuart<<"\n";
	return 0;
}
