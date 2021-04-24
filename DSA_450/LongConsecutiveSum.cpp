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
	for ( int i = 0; i < n ; i++ ){
		cin>>ar[i];
	}  
	int max_so_far = ar[0],max_curr = ar[0];
	for ( int i = 1; i < n ; i++ ){
		max_curr = max(ar[i] , max_curr+ar[i]);
		max_so_far = max( max_curr , max_so_far);
	}
	cout<<max_so_far<<endl;
	return 0;
}
