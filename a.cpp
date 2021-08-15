#include<bits/stdc++.h>
using namespace std;
#define TC(t) while (t--)

#define ll long long
void solve(){
	ll t;cin>>t;
    TC(t){
        ll a,b,op=0,mx=0,excit=0;
        cin>>a>>b;
        if(a==b){
            cout<<mx<<" "<<op<<"\n";
	    continue;
        }else if(a==1){
	    cout<<"1"<<" "<<"0\n";
	    continue;
	}else if(a>b){
            a++;
            b++;
            excit = __gcd(a,b);
            mx = max(mx,excit);
            op++;
        }else if(a<b){
            while(a>0){
		a--;b--;
	    	op++;
	    }
            excit = __gcd(a,b);
            mx = max(mx,excit);
        }
        cout<<mx<<" "<<op<<"\n";
    }
}
int main(){
	solve();
	return 0;
}
