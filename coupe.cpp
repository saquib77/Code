#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        
        vector<int>boy,grl;
        
        for(int i=0;i<n;i++){ int d;cin>>d;boy.push_back(d);}
        for(int i=0;i<n;i++){ int d;cin>>d;grl.push_back(d);}
        
        vector<int>likeness_val;
        sort(boy.begin(),boy.end());
        sort(grl.begin(),grl.end(),greater<int>());
        for(int i=0;i<n;i++) likeness_val.push_back(boy[i]+grl[i]);
        cout<<*max_element(likeness_val.begin(),likeness_val.end());
    }
    return 0;
}