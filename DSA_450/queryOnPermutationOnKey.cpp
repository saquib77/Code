#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> ans;
        vector<int>P;
        for (int i=1;i<=m;++i) {
            P.push_back(i);
        }
        for(int query : queries) {
            auto iter = find(P.begin(), P.end(), query);
            ans.push_back(iter - P.begin());
            rotate(P.begin(), iter, iter + 1);
        }
        return ans;
    }
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    int n,m;
    cin>>n>>m;
    vector<int>res;
    for(int i=0;i<n;i++){
    	int d;
    	cin>>d;
    	res.push_back(d);
    }
    Solution s;
    vector<int>ans = s.processQueries(res,m);
    for(int i=0;i<ans.size();i++){
    	cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
