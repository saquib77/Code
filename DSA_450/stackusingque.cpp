#include <bits/stdc++.h>
using namespace std;
class Stack {
	queue<int> q1, q2;
	int curr_size;
public:
	Stack(){
		curr_size = 0;
	}
	void push(int x)
	{
		curr_size++;
		q2.push(x);
		while (!q1.empty()) {
			q2.push(q1.front());
			q1.pop();
		}
		queue<int> q = q1;
		q1 = q2;
		q2 = q;
	}

	void pop()
	{
		if (q1.empty())
			return;
		q1.pop();
		curr_size--;
	}

	int top()
	{
		if (q1.empty())
			return -1;
		return q1.front();
	}

	int size()
	{
		return curr_size;
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
	Stack s;
    int q;
    cin>>q;
    while(q--){
    	int n;
    	cin>>n;
    	switch(n){
    		case 1: 
    			int x;
    			cin>>x;
    			s.push(x);
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
}
