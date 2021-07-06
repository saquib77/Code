#include<stdio.h>
int main(int argv,char* argc[]){
	struct protocol{
		unsigned char flag:4;
		unsigned char crc:2;
	}tcp;
	printf("%ld\n",sizeof(tcp));
	tcp.flag=15;
	printf("%d\n",tcp.flag);
	tcp.flag=16;
	printf("%d\n",tcp.flag);
	return 0;
}

