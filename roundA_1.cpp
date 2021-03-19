#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m,count=0;
        cin>>n>>m;
        int ar[n];
        int sum=0;
        for(int j=0;j<n;j++) cin>>ar[j];
        for(int j=0;j<n;j++){
            if(sum+ar[j]<=m){
                sum+=ar[j];
                count++;
            }
        }
        cout<<"Case #"<<i<<":"<<" "<<count<<endl;
    }
    return 0;
}
