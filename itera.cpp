#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>>arr;
	int d;
	for(int i=0;i<3;i++){
		vector<int>t;
		for(int j=0;j<3;j++){
			cin>>d;
			t.push_back(d);
		}
		arr.push_back(t);
	}
	for(auto i=arr.begin();i!=arr.end();i++){
		for(auto j=i->begin();j<i->end();j++){
			cout<< *j <<" ";
		}
		cout<<endl;
	}
	return 0;
}
