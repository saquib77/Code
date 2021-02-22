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

bool findPer(int a[], int n){
  do { 
    if(check(a,n)){
          return true;
        }
  } while(next_permutation(a,a+n)); 
    return false;
} 
int main(){ 
    int tc;cin>>tc;
    while(tc--){
      int n;cin>>n;
      int a[n];
      for(int i=0;i<n;i++) a[i]=i+1;
      
      if(findPer(a,n)){
          for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            } 
            cout<<endl;
        }else cout<<"-1"<<endl;
    }
  return 0; 
} 
