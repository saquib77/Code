#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=0;
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		if(s[1]=='+') ++x;
		else --x;
	}
	cout<<x<<endl;
	return 0;
}
