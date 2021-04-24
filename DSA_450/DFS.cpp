#include<bits/stdc++.h>
using namespace std;
class DfsGraph{
	void DFSUtil(int v);
public:
	map<int,bool>visited;
	map<int,list<int>>adj;
	void addEdge(int v,int w);
	void DFS();
};
void DfsGraph::addEdge(int v,int w){
	adj[v].push_back(w);
}
void DfsGraph::DFSUtil(int v){
	visited[v] = true;
	cout<<v<<" ";
	list<int>::iterator i;
	for( i = adj[v].begin(); i!=adj[v].end();++i){
		if(!visited[*i]) DFSUtil(*i);
	}
}
void DfsGraph::DFS(){
	for(auto i:adj){
		if(visited[i.first]==false) DFSUtil(i.first);
	}
}
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
 	DfsGraph g;

 	int n;
 	cin>>n;
 	for(int i=0;i<n;i++){
 		int v,w;
 		cin>>v>>w;
 		g.addEdge(v,w);
 	}
 	// g.addEdge(0,1);
 	// g.addEdge(0,9);
 	// g.addEdge(1,2);
 	// g.addEdge(2,0);
 	// g.addEdge(2,3);
 	// g.addEdge(9,3);

 	g.DFS();
 	return 0;   
}
