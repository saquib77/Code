#include<bits/stdc++.h>
using namespace std;
class A{
	private:
	int m=10;
	void display(){
		cout<<"Display"<<endl;
	}
	public :
	void print(){
		cout<<"Print"<<endl;
	}
	friend class B;			//Making friend of class frnd
};
class B{
	private :
	int k;
	public :
	A a;
	B(int x){
		k=x;
	}
	int ret(){
		return a.m + k;
	}
	void show(){
		a.display();
		a.print();
	}
};

int main(){
	B b = B(12);
	cout<<b.ret()<<endl;
	b.show();
	return 0;
}
