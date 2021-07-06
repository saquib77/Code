#include<stdio.h>
#include<stdlib.h>
struct Node{
	int num;			//Self Refrential Structure
	struct Node *next;
};

void createList(struct Node** head){
	int n;
	printf("Enter num of node to create :");
	scanf("%d",&n);
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	for(int i=1;i<=n;i++){
		int num;
		printf("Enter num:");
		scanf("%d",&num);
		if(i==1){
			temp->num=num;
			temp->next=NULL;
		}else{
			struct Node* p=temp;
			while(p->next!=NULL){
				p=p->next;
			}
			struct Node* t=(struct Node*)malloc(sizeof(struct Node));
			t->num=num;
			t->next=NULL;
			p->next=t;
		}
	}
	*head=temp;
}
void addNodeEnd(struct Node** head){
	struct Node *temp,*p=*head;
	while(p->next!=NULL){
		p=p->next;
	}
	temp = (struct Node*)malloc(sizeof(struct Node));
	printf("Enter data :");
	scanf("%d",&temp->num);
	temp->next=NULL;
	p->next=temp;
}
void addNodeBeg(struct Node** head){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
	printf("Enter data :");
	scanf("%d",&temp->num);
	temp->next=*head;
	*head=temp;
}
void traverse(struct Node** head){
	struct Node* t=*head;
	if(head==NULL){
		printf("List is Empty!\n");
		return;
	}
	while(t!=NULL){
		printf("%d ",t->num);
		t=t->next;
	}
	printf("\n");
}
void addNodePosition(struct Node** head){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
	struct Node* p=*head;
	int pos;
	printf("Enter data and Position:");
	scanf("%d %d",&temp->num,&pos);
	int k=1;
	if(pos==1){
		temp->next=p;
		*head=temp;
		return;
	}
	while(k!=pos-1){
		p=p->next;
		k++;
	}
	temp->next=p->next;
	p->next=temp;
}
void deleteNode(struct Node** head,int val){
	struct Node* temp=*head;
	struct Node* prev=NULL;
    	if(temp!=NULL && temp->num==val){
        	*head=temp->next;
        	free(temp);
        	return;
	}else{
    		while(temp!=NULL && temp->num!=val){
        		prev=temp;
        		temp=temp->next;
		}
		if(temp==NULL) return;
		prev->next=temp->next;
		free(temp);
	}
}
struct Node* swap(struct Node* p1, struct Node* p2){
    struct Node* tmp=p2->next;
    p2->next=p1;
    p1->next=tmp;
    return p2;
}
int sort(struct Node** head,int count){
	struct Node** t;
	int flag=0;
	for(int i=0;i<=count;i++){
        	t=head;
        	flag=0;
        	for(int j=0;j<count-i-1;j++){
            		struct Node* p1=*t;
            		struct Node* p2=p1->next;
            		if(p1->num>p2->num){
                	*t=swap(p1,p2);
                	flag=1;
            	}
           	t=&(*t)->next;
        }
        if(flag==0)  break;
    }
}
int main(int argc,char* argv[]){
	struct Node* head=NULL;
	int n,data;
	while(1){
	printf("1,Create List\n2.Add Node at Beg\n3.Add Node at End\n4.Add Node at Position\n5.Delete Node at Any Pos\n6.Traverse List\n9.Sort List\n10.Exit\nEnter Option :");
	scanf("%d",&n);
	switch(n){
		case 1:
			createList(&head);
			break;
		case 2:
			addNodeBeg(&head);
			break;
		case 3:
			addNodeEnd(&head);
			break;
		case 4:
			addNodePosition(&head);
			break;
		case 5:
			printf("Enter data :");
			scanf("%d",&data);
			deleteNode(&head,data);
			break;
		case 6:
			traverse(&head);
			break;
		case 9:
			sort(&head,8);
			break;
		case 10:
			return 0;
		default:
			printf("Wrong Option!");
	}
	}
	return 0;
}
