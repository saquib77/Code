#include <bits/stdc++.h>
using namespace std;
struct Queue {
	stack<int> s1, s2;
	void enQueue(int x)
	{
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	int deQueue()
	{
		if (s1.empty()) {
			return 0;
		}
		int x = s1.top();
		s1.pop();
		return x;
	}
};

int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL); 
	cout.tie(NULL);
	#ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
	Queue q;
	int q;
    cin>>q;
    while(q--){
    	int n;
    	cin>>n;
    	switch(n){
    		case 1: 
    			int x;
    			cin>>x;
    			q.enQueue(x);
    			break;
    		case 2: 
    			s.pop();
    			break;
    		case 3:
    			cout<<s.top()<<"\n";
    			break;
    	}
    }
	return 0;

	return 0;
}
