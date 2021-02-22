#include<bits/stdc++.h>
using namespace std;

int getIndex(vector<int> v, int K){
    auto it = find(v.begin(),v.end(),K);
    if (it != v.end()){
        int index = it - v.begin();
       	return index;
    }
    return -1;
}

int main(){
	int t;
	while(t--){
		int n,count=0;
		cin>>n;
		vector<int>w;
		vector<int>l;
		int d=0;
        	for(int i=0;i<n;i++){
                	cin>>d;
        	        w.push_back(d);
	        }
        	for(int i=0;i<n;i++){
                	cin>>d;
                	l.push_back(d);
        	}
		for(auto i:w) cout<<i<<" ";
		cout<<"\n";
		for(auto i:l) cout<<i<<" ";
		cout<<"\n";
	}
}
