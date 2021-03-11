#include <bits/stdc++.h>
using namespace std;
unsigned countBits(unsigned int n){ return (int)log2(n)+1; }
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int d=countBits(n);
	    int ln = pow(2,d);
	    vector<int>temp(ln);
	    vector<pair<int,int>>vp;
	    for(int i=0;i<ln;i++) temp[i]=i+1;
        //for(auto i : temp) cout<< i<<" ";
	     for(int i=0;i<temp.size();i++){
	         int a=temp[i];
	         for(int j=i+1;j<temp.size();j++){
	             int b=temp[j];
	             if((a^b)==n) vp.push_back({a,b});
	             else continue;
	         }
	     }
	    int maxNum=0;
	    for(auto x:vp){
	         maxNum = max(maxNum,(x.first*x.second));
	     }
	    cout<<maxNum<<endl;
	}
	return 0;
}