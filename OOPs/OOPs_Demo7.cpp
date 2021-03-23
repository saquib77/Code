#include<bits/stdc++.h>
using namespace std;
class Base{
	public :
	int m=10;
	virtual void print(){
		cout<<"print"<<endl;
	}
	virtual void display(){
		cout<<"display"<<endl;
	}
};
class Derived : public Base{
	public:
	virtual void print(){
		cout<<"PRINT"<<endl;
	}
	void display(){
		cout<<"DISPLAY"<<endl;
	}
};
class Derived1 : public Base{
	public :
	void print(){
		cout<<"Print Of Derived 1"<<endl;
	}
	void display(){
		cout<<"Display of Derived 1"<<endl;
	}
};
int main(){
	Base* b;
	Derived d;
	b=&d;
	b->print();
	b->display();
	Derived1 d1;
	b=&d1;
	b->print();
	b->display();
}
