#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int l1 = w1.length(); 
        int l2 = w2.length();
        string fres="";
        char res[l1+l2];
        int k=0,i=0,j=0,f=0;
        while(i<l1 && j<l2){
        	if(!f){
        		res[k]=w1[i++];
        		f=1;
        	}else if(f){
        		res[k]=w2[j++];
        		f=0;
        	}
        	k++;
        }
        while(i<l1){
        	res[k++]=w1[i++];
        }
        while(j<l2){
        	res[k++]=w2[j++];
        }
        for(int i=0;i<l1+l2;i++){
        	fres+=res[i];
        }
        return res;
    }
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    Solution sol;
    string s,t;
    cin>>s;
    cin>>t;
    cout<<sol.mergeAlternately(s,t);
    return 0;
}
