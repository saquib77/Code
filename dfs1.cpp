#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>gp[6];
bool visited[6];
void dfs(int n){
	if(visited[n]) return;
        visited[n]=true;
        cout<<n<<" ";
        for(auto v:gp[n]) dfs(v.first);
}
int main(){
	gp[1].push_back(make_pair(5,1));
        gp[1].push_back(make_pair(2,5));
        gp[2].push_back(make_pair(3,2));
        gp[2].push_back(make_pair(1,5));
        gp[3].push_back(make_pair(3,2));
        gp[3].push_back(make_pair(4,7));
        gp[4].push_back(make_pair(3,7));
        gp[4].push_back(make_pair(5,2));
        gp[4].push_back(make_pair(5,9));
        gp[5].push_back(make_pair(1,1));
        gp[5].push_back(make_pair(4,2));
	dfs(3);
	cout<<"\n";
	return 0;
}
