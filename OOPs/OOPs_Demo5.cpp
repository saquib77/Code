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
	virtual void Work(){
		cout<<Name<<" is Working with C++"<<endl;
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
	virtual void Work(){
                cout<<Name<<" is Working with "<<favProgLang<<" code."<<endl;
        }
};

class Teacher : public Devs{
public:
	string sub;
	Teacher(string name,string comp,int age,string lang,string subject):Devs(name,comp,age,lang){
		sub=subject;
	}
	void prepLesson(){
		cout<<Name<<"'s Fav Sub is "<<favProgLang<<" and preparing for "<<sub<<endl;
	}
	void Work(){
                cout<<Name<<" is reading  "<<sub<<endl;
        }
};
int main(){
	Devs d=Devs("Ahmed","Amazon",34,"C++");
	Teacher t=Teacher("Saquib","Google",32,"C++","OOPs");
	ODemo* e=&d;
	ODemo* e1=&t;
	e->Work();
	e1->Work();
	return 0;
}
