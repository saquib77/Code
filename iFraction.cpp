#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int p,q,x,y;
        cin>>p>>q;
        int d=__gcd(p,q);
        x=p/d;
        y=q/d;
        if(x!=p && y!=q) cout<<"YES\n";
        else cout<<"NO\n";
    }
    
}