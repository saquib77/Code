#include<bits/stdc++.h>
using namespace std;
class AbstractDemo{
	virtual void Prom()=0;
};
class ODemo:AbstractDemo{
private:
	string Company;
	int Age;
protected:
	string Name;
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
class Devs: public ODemo{
public:
	string favProgLang;
	Devs(string name,string comp,int age,string lang):ODemo(name,comp,age){
		favProgLang=lang;
	}
	void FixBug(){
		cout<<Name<<" is fixing bug in "<<favProgLang<<endl;
	}
};
int main(){
	Devs d=Devs("Saquib","Amazon",32,"C++");
	d.FixBug();
	d.Prom();
	return 0;
}
