#include<bits/stdc++.h>
using namespace std;
string lastLet(string str){
	int s=str.length();
	string res;
	res+=str[s-1];
	res+=" ";
	res+=str[s-2];
	return res;
}
void fizzBuzz(int n){
        for(int i=1;i<=n;i++){
                if(i%3==0 && i%5==0) cout<<"FizzBuzz"<<endl;
                else if(i%3==0 && i%5!=0) cout<<"Fizz"<<endl;
                else if(i%5==0 && i%3!=0) cout<<"Buzz"<<endl;
                else cout<<i<<endl;
        }
}
int main(){
	string s = "APPLE";
//	fizzBuzz(10);
	cout<<lastLet(s)<<endl;
	return 0;
}
