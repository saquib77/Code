#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll tSum=0;
		tSum=(n/4)*44;
		int remain = n%4;
		if(n>=4){
			if(remain==0) tSum=tSum+16;
			if(remain==1) tSum+=32;
			if(remain==2) tSum+=44;
			if(remain==3) tSum+=55;
			cout<<tSum<<endl;
		}else{
			int fres;
			if(remain==1) fres=20;
			if(remain==2) fres=36;
			if(remain==3) fres=51;
			cout<<fres<<endl;
		}
	}
	return 0;
}
