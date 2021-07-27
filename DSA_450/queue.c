#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int data;
	void* next;
}node;
node* rear=NULL;
node* front=NULL;
int insert(int);
int deleteEle();
void printQ();
int main(){
	int op,data;
	while(1){
	printf("1.Insert\n2.Delete\n3.PrintQ\n10.Exit\n");
	scanf("%d",&op);
		switch(op){
			case 1:
				printf("Enter a Number : ");
				scanf("%d",&data);
				int res = insert(data);
				res==1? printf("%d Inserted\n",data):printf("\nOverflow\n");
				break;
			case 2:
				data = deleteEle();
				data==-1 ? printf("Empty Queue\n"):printf("%d Deleted\n",data);
				break;
			case 3:
				printQ(); break;
			case 10:
				return 0;
			default:
				printf("Wrong Option\n");
		}
	}
	return 0;
}

int insert(int data){
	node* temp = (node*)malloc(sizeof(node*));
	if(temp==NULL){
		return 0;
	}else{
		temp->data=data;
		if(front==NULL){
			front=temp;
			rear=temp;
			front->next=NULL;
			rear->next=NULL;
		}else{
			rear->next=temp;
			rear=temp;
			rear->next=NULL;
		}
	}
	return 1;
}
int deleteEle(){
	node* temp;
	int data;
	if(front==NULL){
		return -1;
	}else{
		temp=front;
		front=front->next;
		data = temp->data;
		free(temp);
	}
	return data;
}
void printQ(){
	node* temp;
	temp=front;
	if(front==NULL){
		printf("\nQueue is Empty\n");
	}else{
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
	}
}
