#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        int idx=0;
        int prev=0,curr=0,next=0;
        for(int i=1;i<n;i++){
            curr=ar[i];
            prev=ar[i-1];
            next=ar[i+1];
            if(prev!=curr && curr!=next){ idx=i; break; }
        }
        cout<<idx+1<<endl;
    }
    return 0;
}