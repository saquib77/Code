#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,x;
        cin>>n>>x;
        ll ar[n];
        for(ll i=0;i<n;i++) cin>>ar[i];
        map<int,int>dis;
        for(int i=0;i<n;i++) dis[ar[i]]++;
        int numofDis=dis.size();
        if(numofDis==n){ 
            cout<<n-x<<endl;
        }else if(n-numofDis>=x){
            cout<<numofDis<<endl;
        } 
        else cout<<numofDis-(x-n-numofDis)<<endl;
    }
    return 0;
}