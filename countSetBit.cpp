#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t; 
    while(t--){
	    int n;
        cin>>n;
        int Count=0,Sum=0;
        for(int j=1;j<=n;j++){
            int i=0;
            Count=0;
            while(j>=(1<<i)){
                int  num=j|(1<<i);
                    if(num==j) Count++;
                    i++;
            }
            Sum=Sum+Count;
        }
        cout<<Sum<<endl;
	}
	return 0;
}