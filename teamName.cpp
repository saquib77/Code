#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string a[n];
        for(ll i=0;i<n;i++)cin>>str[i];
        ll res=0;
	sort(a,a+n);
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                string p=a[i];
                string q=a[j];
		swap(p[0],q[0]);
                if(p[0]==q[0]){}
		else if(p==q){}
		else if((!(binary_search(a,a+n,p)))&&(!(binary_search(s,s+n,q)))){
			res+=2;
		}
            }
        }
        cout<<res<<"\n";
    }
}
