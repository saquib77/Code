#include<bits/stdc++.h>
using namespace std;
class Base{
	protected:
		int a,b;
	public :
		Base(int x,int y){
			a=x;
			b=y;
		}
		int getValue(){
			return a+b;
		}
		virtual int addNum(int x,int y) = 0;
};
class Derived: public Base{
	public :
	virtual int Base::addNum(int a,int b){
		Base bs = new Base(a,b);
		return bs.getValue();
	}
};
class SubClass: public Derived{
	public:
	SubClass(){
		Derived d;
		cout<<d.addNum(4,5)<<endl;
	}
};
int main(){
	SubClass s;
	return 0;
}
