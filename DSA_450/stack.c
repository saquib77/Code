#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int data;
	void* next;
}node;
int MAX = 5;
int push(node**,int);
int pop(node**);
int topElement(node*);
int isEmpty(node*);
int isFull(node*);
int size(node*);
int main(){
	node* top = NULL;
	int op,data;
	while(1){
		printf("1.Push\n2.Pop\n3.Top\n4.Is Empty\n5.Is Full\n6.Size\n10.Exit\n");;
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("Enter data to pushed :");
				scanf("%d",&data);
				int res = push(&top,data);
				if(res==1) printf("(%d)Pushed\n",data);
				else printf("Failed to Push\n");
				break;
			case 2:
				data = pop(&top);
				if(data==-1) printf("Underflow\n");
				else printf("(%d)Popped\n",data);
				break;
			case 3:
				data = topElement(top);
				if(data!=0)printf("(%d)Top Element\n",data);
				else printf("Stack Empty\n");
				break;
			case 4:
				data = isEmpty(top);
				if(data==1) printf("Stack Is Not Empty\n");
				else printf("Stack Is Empty\n");
				break;
			case 5:
				data = isFull(top);
				if(data) printf("Stack is Full\n");
				else printf("Stack is Not Full\n");
				break;
			case 6:
				data = size(top);
				printf("(%d)Stack Size\n",data);
				break;
			case 10:
				return 0;
			default:
				printf("Wrong Option\n");
		}
	}
	return 0;
}
int push(node** atop,int data){
	node* temp=(node*)malloc(sizeof(node));
	if(temp==NULL) return 0;
	temp->next=*atop;
	temp->data=data;
	*atop=temp;
	return 1;
}
int pop(node** atop){
	if(*atop==NULL){
		return -1;;
	}
	int d;
	node* temp=*atop;
	d=temp->data;
	*atop=temp->next;
	free(temp);
	return d;
}
int topElement(node* atop){
	if(atop!=NULL) return atop->data;
	else return 0;
}
int isEmpty(node* atop){
	return atop!=NULL;
}
int isFull(node* atop){
	int s = size(atop);
	if(s==MAX) return 1;
	else return 0;
}
int size(node* atop){
	int sz=0;
	while(atop!=NULL){
		sz++;
		atop=atop->next;
	}
	return sz;
}
