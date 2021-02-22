
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m[3][3]={{20,-10,20},{20,20,20},{-10,-20,20}};
	int res[4][4]={0};
	int sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			res[i][j]=m[i][j];
			sum+=m[i][j];
		}
		res[i][3]=sum;
		sum=0;
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			res[j][i]=m[j][i];
			sum+=m[j][i];
		}
		res[3][i]=sum;
		sum=0;
	}
	for(int i=0;i<3;i++){
		sum+=res[i][3];
	}
	res[3][3]=sum;
	return 0;
	
}
