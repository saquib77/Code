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
    int i=0,j=n-1;
    while(i<=j){
        swap(ar[i],ar[j]);
        i++;j--;
    }
    for(auto i:ar) cout<<i<<" ";
    cout<<"\n";
    return 0;
}
