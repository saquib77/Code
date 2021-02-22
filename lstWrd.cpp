#include<bits/stdc++.h>
using namespace std;
int lW(string s){
      stringstream str(s);
      string temp;
      int n = 0;
      while (str >> temp)
         n = temp.size();
      return n;
}
int main(){
	string s;
	getline(cin,s);
	cout<<lW(s)<<"\n";
	return 0;
}
