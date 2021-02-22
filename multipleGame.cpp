#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q,m;
		cin>>n>>q>>m;
		int ar[n]={};
		for(int i=0;i<n;i++)cin>>ar[i];
		int b[1000001]={};
		map<pair<int,int>,int>mp;
		while(q--){
			int l,r;
			cin>>l>>r;
			l--,r--;
			if(ar[l]>m) continue;
			else if(ar[l]<=m&& ar[r]>m){
				b[ar[l]]++;
				b[m+l]--;
			}else if(ar[r]<m){
				b[ar[l]]++;
				b[m+l]--;
				mp[{ar[l],ar[r]}]++;
			}
			for(auto i:mp){
				int x=i.first.first;
				int y=i.first.second;
				int z=i.second;
				b[y+x]-=1;
				b[y+2*x]+=1;
				int w=y+2*x;
				while(w+x<=m){
					w+=y;
					b[w]-=1;
					b[w+x]+=1;
					w+=x;
				}
			}
			int mx=0;
			for(int i=1;i<=m;i++){
				b[i]+=b[i-1];
				mx=max(mx,b[i]);
			}
			cout<<mx<<"\n";
		}
	}
	return 0;
}
