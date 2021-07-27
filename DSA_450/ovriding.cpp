#include<iostream>
using namespace std;
class Parent{
	public:
	void printer(){
		cout<<"Printer of Parent"<<endl;
	}
	virtual void print(){
		cout<<"Print of Parent"<<endl;
	}
};
class Child : public Parent{
	public:
	void print(){
		cout<<"print of Child"<<endl;
	}
};
class Factory{
	public:
	static Parent* factory(){
		return new Child();
	}
};
int main(){
	Parent* p=Factory::factory();
	p->printer();
	p->print();
	return 0;
}
