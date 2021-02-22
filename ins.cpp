
#include<bits/stdc++.h>
using namespace std;
int *insert(int *a,int n,int idx,int val){
	int *b=(int*)malloc((n+1)*sizeof(int));
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	for(int i=n+1;i>=idx;i--){
		b[i]=b[i-1];
	}
	b[idx]=val;
	return b;
}
int main(){
	int a[]={1,2,3,4,5,6};
	int len=sizeof(a)/sizeof(a[0]);
	int *res=insert(a,len,3,33);
	for(int i=0;i<len+1;i++) cout<<res[i]<<" ";
	cout<<endl;
	return 0;
}
