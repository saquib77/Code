#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string replaceDigits(string s) {
       	for(int i=1;i<s.length();i+=2){
       		s[i] = s[i-1]+s[i]-'0';
       	} 
       	return s;
    }
};
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif
	Solution s;
	string str;
	cin>>str;
	cout<<s.replaceDigits(str)<<"\n";
	return 0;
}