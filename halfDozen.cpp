#include<bits/stdc++.h>
using namespace std;
int main(){  
    char str[]="How many eggs in a half-dozen,13?";  
    int wC=0;  
    for(int i=0;i<strlen(str)-1;i++){   
        if(str[i]==' ' && isalpha(str[i+1]) && (i>0)) wC++;
    }
    wC++;   
	cout<<wC<<"\n";
    return 0;  
}

//How many eggs in a half-dozen,13?
