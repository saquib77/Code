#include<bits/stdc++.h>
using namespace std;
class myClass{
	private:
	int a=5,b=5;
	public:
	int add(){
		return a+b;
	}
};


int main(){
	myClass m;
	cout<<m.add();
	return 0;
}
