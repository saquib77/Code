#include <bits/stdc++.h> 
using namespace std; 

bool check(int a[], int n){ 
  	bool flag=0;
	for (int i = 0; i < n; i++) { 
		if((a[i]&a[i+1])>0){
          flag=1;
        }else{
          flag=0;break;
        }
	} 
  	return flag;
} 
int main(){ 
    int tc;cin>>tc;
    while(tc--){
	    int n;cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) a[i]=i+1;
	    int flag=0;
      do { 
        if(check(a,n)){
          flag=1;
        }
      } while(next_permutation(a,a+n)); 
      if(flag){
        for(int i=0;i<n;i++){
              cout<<a[i]<<" ";
          } 
          cout<<"\n";
        }else{
          cout<<"-1"<<"\n";
        }
    }
	return 0; 
} 
