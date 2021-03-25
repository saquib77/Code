#include<bits/stdc++.h>
using namespace std;

void insertAtBeg(list<int>&head){
	int data;
	cout<<"Enter the data : ";
	std::cin>>data;
	head.push_front(data);
}
void insertAtEnd(list<int>&head){
	int data;
	cout<<"Enter the data : ";
	std::cin>>data;
	head.push_back(data);
}
void insertAtAny(list<int>&head){
	int data,pos;
	cout<<"Enter the data and position : ";
	std::cin>>data>>pos;
	auto it = head.begin();
	advance(it,pos-1);
	head.insert(it,data);
}
void deleteData(list<int>&head){
	int data;
	cout<<"Enter the data to delete : ";
	cin>>data;
	head.remove(data);
}
void updateData(list<int>&head){
	int data,pos,rep;
	cout<<"Enter the data to replace with the data and position : ";
	std::cin>>rep>>data>>pos;
	head.remove(rep);
	auto it = head.begin();
	advance(it,pos-1);
	head.insert(it,data);
}
void printList(list<int>&head){
	for(auto it : head){
		cout<<it<<" ";
	}
	cout<<endl;
}
int main(){
	cout<<"Linked List"<<endl;
	list<int>head;
	a:
	cout<<"1.Insertion\n2.Deletion\n3.Updation.\n4.Print List\n5.Exit\n";
	int op;
	cin>>op;
	system("clear");
	switch(op){
		case 1:
			b:
			cout<<"1.Insert At Beg\n2.Insert At End\n3.Insert At Position.\n4.Exit\n";
			int op1;
			cin>>op1;
			system("clear");
			switch(op1){
				case 1:
					insertAtBeg(head);
					goto b;
				break;
				case 2:
					insertAtEnd(head);
					goto b;
				break;
				case 3:
					insertAtAny(head);
					goto b;
				break;
				case 4:
					goto a;
				default :
					cout<<"Invalid Choice!\n";
					goto b;
			}
		break;
		case 2:
			c:
			cout<<"1.Delete At Beg\n2.Delete At End\n3.Delete At Position.\n4.Exit\n";
			int op2;
			cin>>op2;
			system("clear");
			switch(op2){
				case 1:
					deleteData(head);
					goto c;
				break;
				case 2:
					deleteData(head);
					goto c;
				break;
				case 3:
					deleteData(head);
					goto c;
				break;
				case 4:
					goto a;
				default :
					cout<<"Invalid Choice!\n";
					goto c;
			}
		break;
		case 3:
			d:
			cout<<"1.Update Data\n2.Exit\n";
			int op3;
			cin>>op3;
			system("clear");
			switch(op3){
				case 1:
					printList(head);
					updateData(head);
					goto d;
				case 2:
					goto a;
				default :
					cout<<"Invalid Choice!\n";
					goto d;
			}
		break;
		case 4:
			printList(head);
			goto a;	
		break;
		case 5: break;	
	}
}
