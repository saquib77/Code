#include<stdio.h>
#include<stdlib.h>
int x;
int idx=0;
int* createArray(int size){
	return calloc(size,sizeof(int));
}
void addEle(int* arr,int ele){
	if(idx>=x){
		realloc(&arr[0],(2*x)*sizeof(int));
		x=x*2;
	}
	arr[idx++]=ele;
}
int main(){
	scanf("%d",&x);
	int* arr = createArray(x);
	for(int i=0;i<35;i++){
		addEle(&arr[0],i+10);
	}
	for(int i=0;i<35;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
