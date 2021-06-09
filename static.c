#include<stdio.h>
static int x=10;
void print(){
//	static int x=10;
	printf("%d\n",x);
	x++;
}
int main(){
	print();
	print();
	print();
	printf("%d\n",x);
	printf("%d\n",x);
	return 0;
}
