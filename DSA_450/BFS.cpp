#include<bits/stdc++.h>
using namespace std;
static int N;
class Graph{
	public:
	queue<int>q;
	bool visited[N];
	int distance[N];
	map<int,list<int>>adj;
	void addEdge(int v,int w){
		adj[v].push_back(w);
	}
	void BFS(int x,int N){
		visited[x]=true;
		distance[x]=0;
		q.push(x);
		while(!q.empty()){
			 int s = q.top();
			 q.pop();
			 cout<<s<<" ";
			 for(auto u : adj[s]){
			 	if(visited[u]) continue;
			 	visited[u]=true;
			 	distance[u] = distance[s]+1;
			 	q.push(u);
			 }
		}

	}
};

int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    int v,w;
    cin>>N;
    Graph g;
    for(int i=0;i<N;i++){
    	cin>>v>>w;
    	g.addEdge(v,w);
    }
    g.BFS(2,N);
}
