#include<stdio.h>
#include<limits.h>
void countingSort(int *a,int len,int k){
	int count[k];
	int res[len];
	for(int i=0;i<k;i++) count[i]=0;
	for(int i=0;i<len;i++) count[a[i]]++;
	for(int i=1;i<k;i++) count[i] +=count[i-1];
	for(int i=len-1;i>=0;i++) res[count[a[i]]-1] = a[i],count[a[i]]--;
	for(int i=0;i<len;i++) a[i]=res[i];
}
int main(){
	int ar[] = {1,5,3,2,0,2,1,6,5,4,6,5,4,3};
	int n = sizeof(ar)/sizeof(ar[0]);
	int mn=INT_MAX,mx=INT_MIN;
	for(int i=0;i<len;i++){
		mn = min(mn,ar[i]);
		mx = max(mx,ar[i]);
	}
	int k=mx-mn+1;
	countingSort(ar,n,k);
	for(int i=0;i<n;i++) printf("%d ",ar[i]);
	printf("\n");
	return 0;
}
