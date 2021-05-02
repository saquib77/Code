#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minOperations(string b) {
        vector<int>res;
        for(int i=0;i<b.size();i++){
            int op=0;
             for(int j=0;j<b.size();j++){
                 if(b[j]=='1'){
                     op += abs(i-j);
                 }
             }  
             res.push_back(op);
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE 
         freopen("input.txt", "r", stdin); 
         freopen("output.txt", "w", stdout); 
    #endif
    int t;
    Solution s;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        vector<int>res = s.minOperations(str);
        for(auto i:res) cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}