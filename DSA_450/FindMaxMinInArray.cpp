#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];

    int miE=INT_MAX, maE=INT_MIN;
	
	for(int i=1;i<n;i++){
		if(ar[i]>ar[i-1]) {
			miE = min(ar[i-1],miE);
			maE = max(ar[i],maE);
		}
	}
	cout<<miE<<" "<<maE<<endl;
	return 0;
}
