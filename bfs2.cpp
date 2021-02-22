#include<bits/stdc++.h>
using namespace std;

queue<int>q;
bool visited[7];
int dist[7];
vector<pair<int,int>>gp[7];
void bfs(int n){
	visited[n]=true;
	dist[n]=0;
	q.push(n);
	while(!q.empty()){
		int s=q.front();
		q.pop();
		cout<<s<<" ";
		for(auto v:gp[s]){
			if(visited[v.first]) continue;
			visited[v.first]=true;
			dist[v.first]=dist[s]+1;
			q.push(v.first);
		}
	}
}
int main(){
	gp[1].push_back(make_pair(5,1));
        gp[2].push_back(make_pair(3,2));
        gp[2].push_back(make_pair(1,5));
        gp[3].push_back(make_pair(4,7));
        gp[3].push_back(make_pair(2,2));
        gp[4].push_back(make_pair(1,3));
        gp[5].push_back(make_pair(4,2));
	//bfs(1);
	bfs(2);
	cout<<"\n";
	return 0;
}
