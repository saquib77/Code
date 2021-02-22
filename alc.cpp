
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll n,k;
	cin>>n>>k;
	ll totalAlcohol=0;
	for(ll int i=1;i<=n;i++){
		ll int v,p;
		ll alcohol;
		cin>>v>>p;
		alcohol=v*(p/100);
		totalAlcohol+=alcohol;
		if(totalAlcohol>k) cout<<i<<"\n";
		else if(totalAlcohol<=k && i==n) cout<<"-1"<<"\n";
	}
	return 0;
}
