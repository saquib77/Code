#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int minSteps(string s, string t) {
    //     int count=0;
    //     for(int i=0;i<t.length();i++){
    //         int j=0;
    //         bool flag=true;
    //         while(j<s.length()){
    //             if(t[i]==s[j]){
    //                 s[j]='0';
    //                 flag=true;
    //                 break;
    //             }else flag=false;
    //             j++;
    //         }
    //         if(!flag) count++;
    //     }
    //     return count;
    // } TLE
    int minSteps(string s, string t) {
        vector<int>ans(26,0);
        for(auto i:s) ans[i-'a']++;
        for(auto i:t) ans[i-'a']--;
        int d=0;
        for(auto i:ans) d+=abs(i);
        return d/2;
    }//AC
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    string s,t;
    cin>>s;
    cin>>t;
    Solution sol;
    cout<<sol.minSteps(s,t);
    return 0;
}
