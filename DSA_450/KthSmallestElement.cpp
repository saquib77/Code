#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int k;
	cin>>k;
    sort(arr,arr+n);
    stack<int>stk;
    for(int i=n;i>=0;i--){
        stk.push(arr[i]);
    }
    for(int i=0;i<k-1;i++){
        stk.pop();
    }
    cout<<stk.top();
	return 0;
}
