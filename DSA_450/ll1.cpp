#include <bits/stdc++.h>
using namespace std;
int getNthNodeFromEnd(vector<int>ll, int n){
	return ll[n];
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL); 
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif
	int t;
	cin>>t;
	while(t--){
		int l,n;
		cin>>l>>n;
		vector<int>ll;
		for(int i=0;i<l;i++){
			int d;
			cin>>d;
			ll.push_back(d);
		}
		cout<<getNthNodeFromEnd(ll,l-n)<<"\n";
	}
	return 0;
}