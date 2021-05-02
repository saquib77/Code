#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define MAXL 5000
int findOccrence(string str , string word){
	stringstream ss(str);
    int cnt=0;
    while(ss>>str)
    {
        if(str==word)
          cnt++;
    }
    return cnt;
}
int main(){
    #ifndef ONLINE_JUDGE 
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout); 
    #endif 
    int n;
    string word,sent;
	vector<string>sentences;
    map<int,string>mp;
    cin>>n>>word;
    for(int i=0;i<n;i++){
    	getline(cin,sent);
    	cout<<sent<<"\n";
    	sentences.push_back(sent);
    }

    for(auto i:sentences){
    	string temp = i;
    	int t = findOccrence(word,temp);
    	mp[t]=temp;
    }
    //for(auto i: sentences) cout<<i<<"\n";
    map<int,string>::iterator it = mp.begin();
    for(it=mp.begin();it!=mp.end();it++){
    	//cout<<it->second<<"\n";
    }
    return 0;
}
