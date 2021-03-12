#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int N,E,H,A,B,C;
		cin>>N>>E>>H>>A>>B>>C;
		int mn = INT_MAX;
		int count=0;
		int count1=0;
		for(int k=0;k<=min(E,H);k++){
			for(int i=0;i<=E-k;i+=2){
				for(int j=0;j<=H-k;j+=3){
					count+=k + (i/2) + (j/3);
					if(count>=N){
						mn=min(mn,(k*C)+(A*i/2)+(B*j/3));
						count1=count;
					}
					count=0;
				}
			}
		}
		if(count1<N){
			cout<<-1<<endl;
		}else{
			cout<<mn<<endl;
		}
	}
	return 0;
}
