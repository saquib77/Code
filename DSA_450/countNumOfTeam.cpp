#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numTeams(vector<int>&v) {
        int n=v.size();
        int count=0;
        int l1,l2,r1,r2;
        if(n<3) return 0;
        for(int i=1;i<n-1;i++){
        	l1=l2=r1=r2=0;
        	for(int j=0;j<i;j++){
        		if(v[j]<v[i])l1++;
        		else l2++;
        	}
        	for(int j=i+1;j<n;j++){
        		if(v[j]>v[i]) r2++;
        		else r1++;
        	}
        	count=l1*r2+l2*r1+count;
        }
        return count;
    }
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
    	int d;
    	cin>>d;
    	v.push_back(d);
    }
    Solution s;
    cout<<s.numTeams(v);
    return 0;
}
