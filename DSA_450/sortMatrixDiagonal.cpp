#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<vector<int>> diagonalSort(vector<vector<int>>mat) {
		unordered_map<int,priority_queue<int,vector<int>,greater<int>>>m1;
		int n=mat.size();
		int m=mat[0].size();
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				m1[i-j].push(mat[i][j]);
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				mat[i][j]=m1[i-j].top();
				m1[i-j].pop();
			}
		}
		return mat;
    }
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    vector<vector<int>>temp;
    int n,m;
    cin>>n,m;
    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < m; ++j){
    		cin>>temp[i][j];
    	}
    }
    Solution s;
    vector<vector<int>>res=s.diagonalSort(temp);
    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < m; ++j){
    		cout<<res[i][j]<<" ";
    	}
    	cout<<"\n";
    }
}
