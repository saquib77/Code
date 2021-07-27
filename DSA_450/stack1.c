#include<stdio.h>
int push(int*,int*,int,int);
int pop(int*,int*,int);
int main(){
	int stkSize=10;
	int stack[stkSize];
	int top=-1;
	int op,data;
	while(1){
		printf("1.Push\n2.Pop\n10.Exit\n");
		scanf("%d",&op);
		switch(op){
			case 1: printf("Enter the data : ");
				scanf("%d",&data);
				int res = push(stack,&top,data,stkSize);
				res==1 ? printf("\n(%d)Pushed\n",data) : printf("Stack Full\n");
				break;
			case 2:
				data = pop(stack,&top,stkSize);
				data==-1 ? printf("Stack is Empty\n") : printf("(%d)Popped\n",data);
				break;
			case 10:
				return 0;
			default:
				printf("Wrong Choice\n");
				break;
		}
	}
}

int push(int* a,int* atop,int data,int size){
	if(*atop==-1){
		a[size-1]=data;
		*atop = size-1;
		return 1;
	}else if(*atop==0) return 0;
	else{
		a[(*atop)-1]=data;
		(*atop)--;
		return 1;
	}
}
int pop(int* a,int* atop,int size){
	int data=a[*atop];
	if(*atop==-1) return -1;
	if((*atop)==size-1) (*atop)=-1;
	else (*atop)++;
	return data;
}
