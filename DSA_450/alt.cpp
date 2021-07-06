#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  int n;
  cin>>n;
  int v[201][5];
  memset(v,0,sizeof(v));
  int k=1;
  for(int i=1;i<=200;i++){
    for(int j=1;j<=5;j++){
      v[i][j]=k;
      k++;
    }
  }
  for(int i=1;i<=n;i++){
      if(i%2==1){
        for (int j=1;j<=5; j++) cout<<v[i][j]<<" ";
        cout<<"\n";
      }else{
        for (int j=5;j>=1;j--) cout<<v[i][j]<<" ";
        cout<<"\n";
      }
  }
  
	return 0;
}
