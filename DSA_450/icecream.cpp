#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int maxIceCream(vector<int>& costs, int coins) {
		sort(costs.begin(), costs.end());
		int mxCoin=0,cost=0;
		for(int i=0;i<costs.size();i++){
			if(costs[i]+cost<=coins) mxCoin++;
			cost+=costs[i];
		}
		return mxCoin;
    }
};

int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    int n,coins;
    vector<int>costs;
    cin>>n>>coins;
    for(int i=0;i<n;i++){
    	int d;
    	cin>>d;
    	costs.push_back(d);
    }
    Solution s;
    int res = s.maxIceCream(costs,coins);
    return 0;
}
