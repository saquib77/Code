#include<bits/stdc++.h>
using namespace std;
int main(){
	string A,B;
	cin>>A>>B;
	int lenA=A.length();
	int lenB=B.length();
	int count=0;
	for(int i=0;i<lenA;i++){
		char x=A[i];
		for(int j=0;j<lenB;j++){
			if(x==B[j]) count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
