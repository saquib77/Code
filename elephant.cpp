#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    while(n!=0){
        if(n>=5){
            n-=5;
            c++;
        }else if(n>=4){
            n-=4;
            c++;
        }else if(n>=3){
            n-=3;
            c++;
        }else if(n>=2){
            n-=2;
            c++;
        }else if(n>=1){
            n--;
            c++;
        }
    }
    cout<<c<<endl;
}