#include<bits/stdc++.h>
using namespace std;
vector<int>ar;
vector<int>v;
bool findPath(int idx){
	if(ar[idx]==0&&idx<ar.size()) return true;
	auto it=find(v.begin(),v.end(),idx);
	if(it!=v.end()) return false;
	v.push_back(idx);
	return (findPath(abs(idx+ar[idx]))||findPath(abs(idx-ar[idx])));
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int d;
		cin>>d;
		ar.push_back(d);
	}
	int idx;
	cin>>idx;
	if(findPath(idx)) cout<<"true"<<"\n";
	else cout<<"false"<<"\n";
	return 0;
}
