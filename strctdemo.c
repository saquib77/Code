#include<stdio.h>
int main(int argc,char* argv[]){
	struct stu{
		char* name;
		int age;
	}mohan[2]={{"mohan",23},{"manoj",24}};
	struct stu* sohan = &mohan[0];
	printf("%s %d\n",(sohan)->name,(sohan)->age);
	printf("%s %d\n",(sohan+1)->name,(sohan+1)->age);
	return 0;
}
