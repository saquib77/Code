#include<iostream>
using namespace std;
class Base{
protected:
	int data=50;
public:
	virtual void disp(){
		cout<<"Hello "<<data<<endl;
	}
};
class Der : public Base{
public:
	void disp(){
		cout<<"Friend "<<data<<endl;
	}
	void print(){
		cout<<data<<endl;
	}
};
int main(){
	Base *b = new Der();
	b->disp();
	//d->print();
	return 0;
}
