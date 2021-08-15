#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b)                  for(int i = a; i < b; i++)
pair<int,int> selectPackage(int trSpace,int numPk,vector<int>pkSpace){
    map<int,int> mp;
    int mx = INT_MIN;
    trSpace-=30;
    //cout<<pkSpace.size()<<endl;
    vector<int> vec;
    for(int i=0;i<numPk;i++){
         int v = pkSpace[i];
         int f = trSpace-v;
         auto it = mp.find(f);
         if(it!=mp.end()){
             int cmx = v > trSpace-v ? v : trSpace-v;
             if(cmx > mx){
                 mx = cmx;
                 vec.push_back(mp[trSpace-v]);
                 vec.push_back(i);
                //cout<<i<<" ";
             }
         }
         mp[v] = i;
     }
     return {vec[0],vec[1]};
}
void solve(){
	int trSpace=0;
    int numpk=0;
    vector<int>pkSpace;
    cin>>trSpace>>numpk;
    for(int i=0;i<numpk;i++){
	int d;
	cin>>d;
        pkSpace.push_back(d);
    }

    pair<int,int>p =  selectPackage(trSpace,numpk,pkSpace);
    cout<<p.first<<" "<<p.second<<endl;
}

int main(){
	solve();
	return 0;
}
