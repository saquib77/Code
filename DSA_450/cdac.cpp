#include<iostream>
using namespace std;
class MyClass{
	public:
	int x=10;
	char gen='M';
};
int main(){
	MyClass m;
	cout<<m.x<<endl;
	cout<<m.gen<<endl;
	return 0;
}
