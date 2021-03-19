#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	unordered_map<string,string> mp;
	unordered_map<string,int> cnt;
	string str="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	string rstring(){
        	string ans="";
        	srand(time(0));
        	for(int i=0;i<8;i++){
        	    ans+=str[rand()%str.size()];
        	}
        	return ans;
    	}
	string encode(string longUrl) {
		string tmp=rstring();
		cout << tmp << endl;
		cnt[tmp]+=1;
		mp[tmp+to_string(cnt[tmp])]=longUrl;
        	return tmp+to_string(cnt[tmp]);
    	}
    	string decode(string shortUrl) {
        	return mp[shortUrl];
    	}
};
int main(){
	Solution s;
	string ss="https://leetcode.com/problems";
	string es = s.encode(ss);
	cout<<s.decode(es)<<endl;
	return 0;
}
