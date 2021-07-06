#include<stdio.h>
void bubble(int* a,int len){
	int flag=0,temp;
	for(int i=1;i<len;i++){
		flag=0;
		for(int j=1;j<=len-i;j++){
			if(a[j-1]>a[j]){
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
				flag++;
			}
		}
		if(flag=0) break;
	}
}
void selection(int* a,int len){
	int temp,minidx;
	for(int i=0;i<len-1;i++){
		minidx=i;
		for(int j=i+1;j<len;j++){
			if(a[j]<a[minidx]) minidx=j;
		}
		temp=a[i];
		a[i]=a[minidx];
		a[minidx]=temp;
	}
}
void insertion(int* a,int n){
	int temp;
	for(int i=1;i<n;i++){
		temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//bubbleSort(a,n);
	//selection(a,n);
	insertion(a,n);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
