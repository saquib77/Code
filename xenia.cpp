#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>digit;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+') digit.push_back(s[i]-'0');
    }
    sort(digit.begin(),digit.end());
    s.clear();
    for(int i=0;i<digit.size();i++){
        s+=to_string(digit[i]);
        s+='+';
    }
    s.pop_back();
    cout<<s<<endl;
}