#include<bits/stdc++.h>
using namespace std;
int main(){
	system("date");
	system("git status");
	system("git add .");
	string m;
	cout<<"Enter Commit Message : ";
	cin>>m;
	string gitMsg = "git commit -m";
	gitMsg=gitMsg+m;
	const char *msg = gitMsg.c_str();
	system(msg);
	system("git push origin main");
	system("clear");
	cout<<"Successfully Uploaded File & Directory to GitHub"<<endl;
	return 0;
}
