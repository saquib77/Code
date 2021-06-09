#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
    	int m = box.size(), n= box[0].size();
    	vector<vector<char>> res(n, vector<char>(m));

    	for(auto i=0;i<m;i++){
    		for(auto j=n-1;j>=0;j--){
    			if(box[i][j]=='#'){
    				int k=j;
    				while(k+1 < n && box[i][k+1]=='.'){
    					swap(box[i][k],box[i][k+1]);
    					k++;
    				}
    			}
    		}
    	}
    	for(int i=0;i<m;i++){
        	for(int j=0;j<n;j++){
            	res[j][i] = box[i][j];
        	}
    	}
    	for (int i = 0; i < res.size(); i++){
        	reverse(res[i].begin(),res[i].end());
    	}
    	return res;
    }
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    int n,m;
	cin>>n>>m;
	Solution s;
	vector<vector<char>>v;
	for(auto i=0;i<n;i++)
		for(int j=0;j<m;++j)
			cin>>v[i][j];

	vector<vector<char>> res = s.rotateTheBox(v);

	for(auto i=0;i < res.size();i++){
		for (int j = 0; j < res[0].size(); ++j){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}
