#include<stdio.h>
int main(int argv,char* argc[]){
	union college{
		struct student{
			char* name;
			int age;
		}stu;
		char* name;
	}clg;
	printf("%ld\n",sizeof(clg));
	clg.stu.age=22;
	clg.name = "IUL";
	printf("%s\n",clg.name);
	clg.stu.name = "Saquib";
	printf("%d\n",clg.stu.age);
	printf("%s\n",clg.stu.name);
	return 0;
}
