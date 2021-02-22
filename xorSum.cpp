#include<bits/stdc++.h>
using namespace std;
bool isSeq(vector<int>ar,int sum,int k){
	int l=k,h=sum-k;
	int x=ar.size();
	bool mat[2][h+1];
	for(int i=0;i<=x;i++){
		for(int j=0;j<=h;j++){
			if(j==0)mat[i%2][j]=true;
			else if(i==0)mat[i%2][j]=false;
			else if(ar[i-1]<=j)mat[i%2][j]=mat[(i+1)%2][j-ar[i-1]]||mat[(i+1)%2][j];
			else mat[i%2][j]=mat[(i+1)%2][j];
		}
	}
	int flag=0;
	for(int i=l;i<=h;i++){
		if(mat[x%2][i]){
			flag=1;break;
		}
	}
	if(flag==1) return true;
	else return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		int ipt;
		cin>>n>>k;
		priority_queue<int>q;
		vector<int>ar;
		for(int i=0;i<n;i++){
			cin>>ipt;
			q.push(ipt);
		}
		int flag=0,sum=0,j;
		while(!q.empty()&&flag==0){
			sum+=q.top();
			ar.push_back(q.top());
			q.pop();
			if(sum>=2*k){
				if(isSeq(ar,sum,k)==true){
					cout<<ar.size()<<"\n";
					flag=1;
					break;
				}else continue;
			}
		}
		if(flag==0){
			cout<<"-1"<<"\n";
		}
	}
	return 0;
}
