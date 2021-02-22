#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>ar,res;
		for(int i=0;i<n;i++){
			int d=0	;
			cin>>d;
			ar.push_back(d);
		}
		sort(ar.begin(),ar.end());
		int i=0,j=ar.size()-1;
		while(i<=j){
			res.push_back(ar[j]);
			res.push_back(ar[i]);
			i++;
			j--;
		}
		if(ar.size()%2==1) res.pop_back();
		for(auto i:res) cout<<i<<" ";
		cout<<"\n";
	}
	return 0;
}
