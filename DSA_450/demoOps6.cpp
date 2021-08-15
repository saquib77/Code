#include<iostream>
using namespace std;
class BaseClass{
public:
	int ar[10];
};
class Derived :public virtual  BaseClass{

};
class Derived1 :public virtual  BaseClass{

};
class DerivedBase : public Derived , public Derived1 {

};
int main(){
	cout<<sizeof(DerivedBase);
	return 0;
}