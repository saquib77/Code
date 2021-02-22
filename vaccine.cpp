#include<bits/stdc++.h>
using namespace std;
int main(){
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int total=0,c=0;
	if(d1==d2 && d1==1){
		while(total<p){
			c++;
			total+=v1+v2;
		}
		cout<<c<<endl;
	}else{
		c=min(d1,d2)-1;
		while(total<p){
			if(d1>d2){
				total+=v2;
				d2++;
			}else if(d2>d1){
				total+=v1;
				d1++;
			}else if(d1==d2){
				total+=v1+v2;
			}
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
