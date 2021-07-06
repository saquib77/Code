#include<stdio.h>
int getMax(int a[],int n){
	int temp= a[0];
	for(int i=1;i<n;i++)
		if (a[i]>temp)temp=a[i];
	return temp;
}
void countSort(int a[],int n,int pv){
	int temp[n];
	int count[10]={0};
	for(int i=0;i<n;i++)count[(a[i]/pv)%10]++;
	for(int i=1;i<10;i++)count[i]+=count[i-1];
	for(int i=n-1;i>=0;i--){
		temp[count[(a[i]/pv)%10]-1]=a[i];
		printf("Element : %d\tPosition : %d\t(a[i]/pv)%10 : %d\n",temp[count[(a[i]/pv)%10]-1],count[(a[i]/pv)%10]-1,(a[i]/pv)%10);
		count[(a[i]/pv)%10]--;
	}
	printf("\n");
	for(int i=0;i<n;i++) a[i]=temp[i];
}
void radixsort(int a[],int n){
	int m=getMax(a,n);
	for(int pv=1;m/pv>0;pv*=10) countSort(a,n,pv);
}
void print(int a[],int n){
	for(int i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
}
int main(){
	int a[]={100,5,236,211,11,152,90,625,541,10,446,345,409,324};
	int n=sizeof(a)/sizeof(a[0]);
	printf("Unsorted :");print(a,n);
	radixsort(a,n);
	printf("Sorted : ");print(a,n);
	return 0;
}
