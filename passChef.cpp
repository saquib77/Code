#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int am,bm,cm,tm,a,b,c;
        cin>>am>>bm>>cm>>tm>>a>>b>>c;
        if(a<am||b<bm||c<cm) cout<<"NO\n";
        else if(a+b+c>=tm) cout<<"YES\n"<<endl;
        else cout<<"NO\n";
    }
    return 0;   
}