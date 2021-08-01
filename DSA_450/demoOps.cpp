#include<bits/stdc++.h>
using namespace std;
class Sol{
	public :
	static int x;
	void print(){
		x++;
		cout<<Sol::x<<endl;
	}
	void display(){
		print();
	}
	Sol(){
		cout<<"Constructor Called of Sol"<<endl;
	}
	~Sol(){
		cout<<"Destructor Called of Sol"<<endl;
	}
};
int Sol::x=0;
class Sol1{
	public :
	Sol s;
	Sol1(){
		s.display();
		cout<<"Constructor Called of Sol1"<<endl;
	}
	~Sol1(){
		cout<<"Destructor Called of Sol1"<<endl;
	}
};

int main(){
	Sol1 s;
	return 0;
}
