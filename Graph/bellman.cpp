#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<climits>
using namespace std;
vector<tuple<int,int,int>>gp;
class BellmanFord{
	public:
	int dis[6];
	BellmanFord(vector<tuple<int,int,int>>&gp){
		gp.push_back({1,2,5});
		gp.push_back({1,3,2});
		gp.push_back({1,4,7});
		gp.push_back({2,4,3});
		gp.push_back({2,5,4});
		gp.push_back({3,4,3});
		gp.push_back({4,5,2});
		for(auto i=0;i<=5;i++) dis[i]=INT_MAX;
	}
	void shortestPath(vector<tuple<int,int,int>>&gp,int n){
		dis[n]=0;
		for(int i=1;i<=5;i++){
			for(auto e:gp){
				int a,b,w;
				tie(a,b,w)=e;
				dis[b]=min(dis[b],dis[a]+w);
			}
		}
	}
	void display(){
		for(auto i:dis) cout<<i<<" ";
		cout<<"\n";
	}
};

int main(){
	int n,m;
	cout<<"Enter a to b node : ";
	cin>>n>>m;
	BellmanFord* b=new BellmanFord(gp);
	b->shortestPath(gp,n);
	b->display();
	cout<<"Weight : "<<b->dis[m]<<"\n";
	return 0;
}
