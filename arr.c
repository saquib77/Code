#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	int arr[x];
	int i;
	for(i=0;i<x+15;i++){
		arr[i]=i+x;
	}
	for(i=0;i<x+15;i++){
		printf("%d\t",arr[i]);
		printf("\n");
	}
	printf("\n");
	return 0;
}
