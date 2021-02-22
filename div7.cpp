#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,c=0;
		cin>>n;
		vector<int>per;
		while(n){
			per.push_back(n%10);
			n/=10;
		}
		sort(per.begin(),per.end());
		do{
			int sum=0;
      			for(auto& x:per)
        		sum=sum*10+x;
			if(sum%7==0) c++;
		}while(next_permutation(per.begin(),per.end()));
		cout<<c<<"\n";
	}
}
