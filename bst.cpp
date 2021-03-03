#include<iostream>
#include<stdlib.h>
using namespace std;
struct bt_node{
	bt_node *left;
	bt_node *right;
	int info;
};
bt_node *root = NULL;


void insert(int data){
	bt_node *temp,*ptr,*pre;
	temp=(bt_node *)malloc(sizeof(bt_node));
	temp->info=data;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL) root=temp;
	else{
		ptr=root;
		while(ptr!=NULL){
			pre=ptr;
			if(temp->info<ptr->info){
				ptr=ptr->left;
			}

			else{
				ptr=ptr->right;
			}
		}
		if(pre->info>temp->info){
			pre->left=temp;
		}
		else{
			pre->right=temp;
		}
	}
}


void inorder(bt_node* node){
	if(node==NULL)
		return ;
	else{
		inorder(node->left);
		cout<<" ->"<<node->info;
		inorder(node->right);
	}
}

int main(){
	int ch,d;
	while(1){
		cout<<"1.Insert\n2.Display(Inorder)\n3.Exit : \n";
		cin>>ch;
		switch(ch){
			case 1: cout<<"\nEnter data : ";
					cin>>d;
					insert(d);
					break;
			case 2: cout<<"Nodes are : \n";
					inorder(root);
					break;
			case 3: exit(0);
		}
	}
	return 0;
}

