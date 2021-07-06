#include<stdio.h>
int pivot(int* a,int si,int li){
	int t,i=si+1,j=li,piv=a[si];
	while(i<=j){
		while(a[i]<piv && i<li) i++;
		while(a[j]>piv) j--;
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		else i++;
	}
	a[si]=a[j];
	a[j]=piv;
	return j;
}
void quickSort(int* a,int si,int li){
	if(si>li) return;
	int piv = pivot(a,si,li);
	quickSort(a,si,piv-1);
	quickSort(a,piv+1,li);
}
int main(int argv,char argc[]){
	int a[] = {7,4,5,2,1,6,3};
	int n = sizeof(a)/sizeof(a[0]);
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
	return 0;
}


