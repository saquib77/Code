#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter two num:";
	cin>>num1>>num2;
	num3 = num1+num2;
	cout<< "Sum of "<<num1<<" & "<<num2 <<" :"<<num3<<endl;
	num3=num1*num2;
	cout<< "multiplication of "<<num1<<" & "<<num2<< " : "<<num3<<endl;
	num3=num1-num2;
	cout<< "subtraction of "<<num1<<" & "<< num2 <<" : "<<num3<<endl;
	num3 =num1/num2;
	cout<< "division of "<<num1<<" & "<<num2<<" : "<<num3<<endl;
	return 0;
}
