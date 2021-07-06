#include<stdio.h>
struct node{
	int data;
	struct node *next;
}*head,a,b,c;

void fun(struct node* a){
	printf("%ld\n",sizeof(a));
	
}
int main(int argv, char* argc[]){
	head = &a;
	a.data = 10;
	a.next =NULL;
	fun(&a);
	return 0;
}
