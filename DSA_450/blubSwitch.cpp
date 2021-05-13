#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minFlips(string target) {
        int minFlips=0;
        char bit = '0';
        for(int i=0;i<target.size();i++){
        	if(bit!=target[i]){
        		minFlips++;
        		bit=target[i];
        	}
        }
        return minFlips;
    }
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.minFlips(s);
    return 0;
}
