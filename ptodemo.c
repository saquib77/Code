#include<stdio.h>
int add(int,int);
int sub(int,int);
int caller(int(*)(int,int),int,int);
int main(int argc,char* argv[]){
	int (*fp)(int ,int);
	printf("%d\n",caller(add,2,5));
	printf("%d\n",caller(sub,5,2));
	return 0;
}
int add(int x,int y) { return x+y; }
int sub(int x,int y) { return x-y; }

int caller(int(*fp)(int,int),int x,int y){
 return fp(x,y);
}
