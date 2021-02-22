#include<bits/stdc++.h>
using namespace std;
class ODemo{
private:
	string Name;
	string Company;
	int Age;
public:
	void setName(string name){
		Name=name;
	}
	string getName(){
		return Name;
	}
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
	od.setName("Khan");
	cout<<od.getName()<<endl;
	return 0;
}
