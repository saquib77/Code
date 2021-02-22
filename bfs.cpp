#include<bits/stdc++.h>
using namespace std;

queue<int>q;
bool visited[7];
int dist[7];
vector<int>gp[7];
void bfs(int n){
	visited[n]=true;
	dist[n]=0;
	q.push(n);
	while(!q.empty()){
		int s=q.front();
		q.pop();
		cout<<s<<" ";
		for(auto v:gp[s]){
			if(visited[v]) continue;
			visited[v]=true;
			dist[v]=dist[s]+1;
			q.push(v);
		}
	}
}
int main(){
	gp[1].push_back(2);
	gp[1].push_back(4);
	gp[2].push_back(1);
	gp[2].push_back(3);
	gp[2].push_back(5);
	gp[3].push_back(2);
	gp[3].push_back(6);
	gp[4].push_back(1);
	gp[5].push_back(2);
	gp[5].push_back(6);
	gp[6].push_back(5);
	gp[6].push_back(3);
	bfs(6);
	cout<<"\n";
	return 0;
}
