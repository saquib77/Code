#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return (x%2)<(y%2);
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=1;i<=n;i++) cin>>ar[i];
        sort(ar+1,ar+n+1,cmp);
        for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    return 0;
}