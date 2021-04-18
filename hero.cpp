#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mp;
    string s;
    cin>>s;
    for(auto i : s){
        mp[i]++;
    }
    if(mp.size()%2==0) cout<<"CHAT WITH HER!\n";
    else cout<<"IGNORE HIM!\n";
}