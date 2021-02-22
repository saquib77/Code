
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int count=0;
	vector<string>car;
	while(cin>>n){
		if(n==1){
			string s;cin>>s;
			count++;
			int size=s.size();
			if(size>=6 || size<=12) car.push_back(s);
			cout<<"CAR PARKED AT POSITION:"<<count<<endl;
		}else if(n==2){
			string s;
			cin>>s;
			vector<string>::iterator it;
			it=find(car.begin(),car.end(),s);
			if(it != car.end()){
				cout<<"CAR POSITION :"<<it - car.begin() + 1<<endl;
			}else cout<<"CAR DOES NOT EXIST"<<endl;
		}
		else cout<<"INVALID INPUT"<<endl;
	} 
	return 0;
}
