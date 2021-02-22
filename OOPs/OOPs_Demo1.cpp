#include<bits/stdc++.h>
using namespace std;
class ODemo{
private:
	string Name;
	string Company;
	int Age;
public:
	ODemo(string name,string comp,int age){
		Name=name;
		Company=comp;
		Age=age;
	}
	void Intro(){
		cout<<"Name : "<<Name<<endl;
		cout<<"Company : "<<Company<<endl;
		cout<<"Age : "<<Age<<endl;
	}
};

int main(){
	ODemo od=ODemo("Saquib","Google",23);
	od.Intro();
	ODemo od1=ODemo("Ahmed","Amazon",25);
	od1.Intro();
	return 0;
}
