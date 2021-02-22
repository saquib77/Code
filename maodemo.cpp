
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int>m;
	int a,b;
	while(cin>>a>>b && a!=0 && b!=0){
		m.insert(make_pair(a,b));
	}
	auto it=m.begin();
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
