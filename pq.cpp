#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int,deque<int>,greater<int>>pq;
	pq.push_back(10);
	pq.push(50);
	pq.push(30);
	while(!pq.empty()){
		cout<<pq.top()<<endl;
		pq.pop();
	}
	return 0;
}
