#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	if(argc<=2){
		fprintf(stderr,"USAGE <process_name> <input_file> <output_file>.\n");
		exit(0);
	}
	FILE* f = fopen(argv[1],"r");
	FILE* fw = fopen(argv[2],"a");
	if(f==NULL || fw==NULL){
		fprintf(stderr,"Not able to Open File\n");
		exit(0);
	}
	int data;
	while((data=fgetc(f))!=EOF){
		fprintf(fw,"%c",data);
	}
	fclose(f);
	fclose(fw);
	return 0;
}
