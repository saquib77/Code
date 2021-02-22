#include<bits/stdc++.h>
using namespace std;
class AbstractDemo{
	virtual void Prom()=0;
};
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
	void Prom(){
		if(Age>=30) cout<<Name<<" , got Promoted!"<<endl;
		else cout<<Name<<" ,Sorry ! No Promotion!"<<endl;
	}
};

int main(){
	ODemo od=ODemo("Saquib","Google",23);
	od.Intro();
	ODemo od1=ODemo("Ahmed","Amazon",35);
	od1.Intro();
	od1.Prom();
	return 0;
}
