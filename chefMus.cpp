#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll N,R;
        cin>>N>>R;
        vector<ll>A,B;
        for(ll i=0;i<N;i++){ ll d;cin>>d; A.push_back(d);}
        for(ll i=0;i<N;i++){ ll d;cin>>d; B.push_back(d);}
        ll maxTension=0,x=0,mT=0;
        for(ll i=0;i<N;i++){
            maxTension=B[i]+x;
            x += B[i];
            x -= R;
        }
        cout<<maxTension<<endl;
    }
    return 0;
}