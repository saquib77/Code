#include<bits/stdc++.h>
using namespace std;
vector<int> removeOccurence(vector<int>&nums){
    int sum = 0;
    int i=0;
    int j=3;
    while(i<j && j<nums.size()-3){
        int k=i;
        while(k<j){
            sum+=nums[k];
            k++;
        }
        if(sum==0) nums.erase(nums.begin()+i-1,nums.end()+j-1);
        i++,j++;
    }
    return nums;
}
int main(){
	int n;cin>>n;
    	vector<int>temp;
    	for(int i=0;i<n;i++){
        	int d;cin>>d;
        	temp.push_back(d);
    	}
    	vector<int>res = removeOccurence(temp);
    	for(auto i:res) cout<<i<<" ";
	cout<<endl;
	return 0;
}
