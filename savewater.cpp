#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int H,x,y,C;
        cin>>H>>x>>y>>C;
        int res = x+(y/2);
        res=res*H;
        if(res>C) cout<<"NO\n";
        else if(res<=C) cout<<"YES\n";
    }
    return 0;
}