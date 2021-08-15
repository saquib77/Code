#include<stdio.h>
int main(){
	printf("Hello\n");
	fork();
	printf("World\n");
	fork();
	printf("Bye\n");
	fork();
}
