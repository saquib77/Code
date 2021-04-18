#include<bits/stdc++.h>
using namespace std;
#define R 5
#define C 5
int main(){
    int ar[R][C];
    int a=0,b=0;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>ar[i][j];
            if(ar[i][j]==1) a=i+1,b=j+1;
        }
    }
    int minCost=0;
    int d1=ceil((R+1)/2);
    cout<<abs(a-d1)+abs(b-d1)<<endl;
    return 0;
}