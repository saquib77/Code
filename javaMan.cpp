#include<bits/stdc++.h>
using namespace std;
int main(){
	string javaD;
	cout<<"Enter The package name : ";
	cin>>javaD;
	string javap = "javap java.";
	javap=javap+javaD;
	const char* javam = javap.c_str();
	system(javam);
	return 0;
}
