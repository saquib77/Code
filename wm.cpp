#include<bits/stdc++.h>
using namespace std;
#define intt long long
int32_t main(){
	int t;
	cin>>t;
	while(t--){
		intt n,m,k;
		cin>>n>>m>>k;
		intt A[n+1][m+1];
		memset(A,0,sizeof(A));
		for(intt i=1;i<=n;i++){
			for(intt j=1;j<=m;j++){
				cin>>A[i][j];
			}
		}
		for(intt i=1;i<=n;i++){
			for(intt j=1;j<=m;j++){
				A[i][j]+=A[i][j-1];
			}
		}
		for(intt j=1;j<=m;j++){
			for(intt i=1;i<=n;i++){
				A[i][j]+=A[i-1][j];
			}
		}
		intt res=0;
		for(intt s=1;s<=n;s++){
			for(intt i=1;i<=n-s+1;i++){
				intt l=1;
				intt h=m-s+1;
				intt m;
				intt p,flag=0;
				while(l<=h){
					m=(h+l)/2;
					intt s=A[i+s-1][m+s-1]-A[i+s-1][m-1]-A[i-1][m+s-1]+A[i-1][m-1];
					if(s>=k*s*s){
						h=m-1;
						p=m;
						flag=1;
					}else{
						l=m+1;
					}
				}
				if(flag==1) res+=(m-s-p+2);
			}
		}
		cout<<res<<endl;
	}
}
