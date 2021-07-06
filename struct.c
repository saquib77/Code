#include<stdio.h>
struct student{
	char* name;
	int age;
	struct address{
		char* city;
		char* hno;
	}loc;
}stu;

int main(int argv, char* argc[]){
	stu.name = "Saquib";
	stu.age = 22;
	stu.loc.city = "SGRL";
	stu.loc.hno = "123";
	printf("%s %d\n",stu.name,stu.age);
	printf("%s %s\n",stu.loc.city,stu.loc.hno);
	return 0;
}
