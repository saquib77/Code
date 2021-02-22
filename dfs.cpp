#include<bits/stdc++.h>
using namespace std;
vector<int>gp[6];
bool visited[6];

void dfs(int n){
	if(visited[n]) return;
	visited[n]=true;
	cout<<n<<" ";
	for(auto v:gp[n]) dfs(v);
}

int main(){
	gp[1].push_back(2);
	gp[1].push_back(4);
	gp[1].push_back(5);
	gp[2].push_back(1);
	gp[2].push_back(3);
	gp[2].push_back(4);
	gp[3].push_back(2);
	gp[3].push_back(4);
	gp[4].push_back(1);
	gp[4].push_back(2);
	gp[4].push_back(3);
	gp[5].push_back(1);
	dfs(5);
	cout<<"\n";
	return 0;
}
