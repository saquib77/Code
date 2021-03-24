#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> findNearestSmallerElements(vector<int>&arr){
        vector<int>res;
        stack<int>s;
        for(int i=0;i<arr.size();i++){
            while(!s.empty() && arr[i]<=s.top()){
                s.pop();
            }
            if(!s.empty()) res.push_back(s.top());
            s.push(arr[i]);
        }
        return res;
    }
};
void printArr(vector<int>res){
    for(auto i:res) cout<<i<<" ";
    cout<<endl;
}
int main(){
    vector<int>arr={1,6,4,10,2,5};
    vector<int>arr1={1,3,0,2,5};
    vector<int>arr2={1,4,2,7,1,2};
    vector<int>arr3={9,8,7,6,5,4,3,2,1};
    Solution s;
    vector<int>t=s.findNearestSmallerElements(arr);
    vector<int>t1=s.findNearestSmallerElements(arr1);
    vector<int>t2=s.findNearestSmallerElements(arr2);
    vector<int>t3=s.findNearestSmallerElements(arr3);
    printArr(t);
    printArr(t1);
    printArr(t2);
    printArr(t3);
    return 0;
}