#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char,int>pat;
        vector<string>res;
        vector<int>p,w;
        for(auto i:pattern)pat[i]++;
        for(auto [k,v]:pat){
        	p.push_back(v);
        }
        for(auto i:words){
        	unordered_map<char,int>tmp;
        	for(auto j:i){
        		tmp[j]++;
        	}
        	for(auto [k,v]:tmp){
        		w.push_back(v);
        	}
        	if(p==w) res.push_back(i);
        }
        return res;
    }
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    
}
