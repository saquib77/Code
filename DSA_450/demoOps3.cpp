#include<iostream>
using namespace std;
class Base{
public:
	class SubBase{
	public:
		SubBase(){
			cout<<"Im SubBase"<<endl;
		}
	};
	class SubBase1:public SubBase{
	public:
		SubBase1(){
			cout<<"Im SubBase1"<<endl;
		}
	};
	SubBase1 sb;
};
int main(){
	Base b;
	return 0;
}