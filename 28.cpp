#include<iostream>
using namespace std;

int main(){
	const int a=7;
	const int *p=&a;
	cout<<*++p;
	return 0;
}
