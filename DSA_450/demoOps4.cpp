#include<iostream>
using namespace std;
class AbsBase{
public:
	virtual void print()=0;
};
class AbsDerived:public AbsBase{
public:
	void print(){
		cout<<"Im AbsBase Function Derived in AbsDerived"<<endl;
	}
};
int main(){
	AbsBase *ab = new AbsDerived();
	ab->print();
	return 0;

}