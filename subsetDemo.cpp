#include<bits/stdc++.h>
using namespace std;
class MyClass{
	public:
	vector<vector<int>> subset(vector<int>&v){
		int size=v.size();
		int totalSubset=1<<size;
		vector<vector<int>> res;
		for(int i=0;i<totalSubset;i++){
			vector<int>temp;
			for(int j=0;j<size;j++){
				if((i&1<<j)!=0) temp.push_back(v[j]);
			}
			res.push_back(temp);
		}
		return res;
	}
};

int main(){
	vector<int>v={1,2,3,4,5,6};
	MyClass m;
	auto res=m.subset(v);
	for(auto x:res){
		cout<<"{ ";
		for(int i:x){
			cout<<i<<" ";
		}
		cout<<"}";
		cout<<endl;
	}
	return 0;
}
