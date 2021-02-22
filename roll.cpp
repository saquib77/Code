#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    cin>>n;
    cin.ignore(256, '\n'); 
    string s,st="";
    vector<string>arr(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        arr[i]=s;
    }
    unsigned long long res=0;
    for(int i=0;i<n;i++)
    {
        res=0;
        s=arr[i];
        //cout<<s<<endl;
        st="";
        for(int j=0;(j+5)<s.size();j++)
        {
            if(s[j]=='o' && s[j+1]=='r' && s[j+2]=='e' && s[j+3]=='e' && s[j+4]=='e' && s[j+5]==' ')
              break;
              st+=s[j];
        }
       // cout<<st<<endl;
        for(auto x:st)
        {
            res=res*26+x-'a'+1;
        }
        cout<<res<<endl;
    }
}
