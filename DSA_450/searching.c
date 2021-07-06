#include<stdio.h>
int linearSearch(int *a,int len,int val){
	for(int i=0;i<len;i++){
		if(a[i]==val) return i;
	}
	return -1;
}
int main(){
	int a[]={4,1,6,10,5,9,7};
	int len = sizeof(a)/sizeof(a[0]);
	int val=0;
	printf("Enter Val to search :");
	scanf("%d",&val);
	int res = linearSearch(a,len,val);
	if(res>0) printf("Element found at index %d\n",res+1);
	else printf("Element Not Found!\n");
	return 0;
}
