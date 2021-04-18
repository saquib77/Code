#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num=1;
	for(int i=0;i<n;i++){
		num=1;
		for(int j=0;j<=i;j++){
			num*=2;
			cout<<num<<" ";
		}
		cout<<endl;
	}
	return 0;
}
