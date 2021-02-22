#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};

//Initialize a Node---------------------------
void initNode(struct Node* head,int data){
	head->data=data;
	head->next=NULL;
}
//--------------------------------------------

//Add New Node--------------------------------
void addNode(struct Node* head,int data){
	Node *newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;
	Node *curr = head;
	while(curr){
		if(curr->next==NULL){
			curr->next = newNode;
			return;
		}
		curr=curr->next;
	}
}
//-------------------------------------------

//Add Node at Beginning----------------------
void addFront(struct Node** head,int data){
	Node *newNode=new Node;
	newNode->data=data;
	newNode->next=*head;
	*head=newNode;
}
//-------------------------------------------

//add Node at End----------------------------
void addEnd(struct Node* head,int data){
	Node *curr=head;
	Node *newNode = new Node;
	newNode->data=data;
	newNode->next=NULL;
	if(!head){
		head=newNode;
		return;
	}else{
		while(curr->next) curr=curr->next;
		curr->next=newNode;
	}
}
//--------------------------------------------

//Add Node at given position-----------------
void addPos(struct Node* head,int data,int pos){
	int count=0;
	Node *newNode = new Node;
	Node *curr=head;
	Node *prev=NULL;	
	newNode->data=data;
	while(count!=pos){
		prev=curr;
		curr=curr->next;
		count++;
	}
	newNode->next=curr;
	prev->next=newNode;
	
}
//-------------------------------------------

//Print List---------------------------------
void print(struct Node* head){
	while(head){
		cout<< head->data <<" ";
		head=head->next;
	}
	cout<<endl;
}
//-------------------------------------------

//Delete Node from Begining------------------
void deleteBeg(struct Node* head){
	Node* temp=head;
	head=head->next;
	temp->next=NULL;
}
//-------------------------------------------

int main(){
		struct Node *head=new Node;
		initNode(head,10);
		addNode(head,20);
		addNode(head,30);
		addFront(&head,5);
		addPos(head,35,3);
		addNode(head,40);
		addNode(head,50);
		addEnd(head,60);
		print(head);
		deleteBeg(head);
		print(head);
		return 0;
}
