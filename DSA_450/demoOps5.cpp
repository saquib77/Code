#include <iostream>
using namespace std;
class Base{
public:
	virtual void display(){
		cout<<"Im Display of Base"<<endl;
	}
	void print(){
		cout<<"Im Print of Base"<<endl;
	}
};
class Derived:public Base{
public:
	void display(){
		cout<<"Im Display of Derived"<<endl;
	}
	void print(){
		cout<<"Im Print of Derived"<<endl;
	}
};
int main(){
	Derived d;
	Base &b = d;
	b.display();
	b.print();
	return 0;
}