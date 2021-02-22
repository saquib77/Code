#include<bits/stdc++.h>
using namespace std;
void rightRotateArray(int *ar,int n){
	int t=0;
	t=ar[n-1];
	for(int i=n;i>=0;i--) ar[i]=ar[i-1];
	ar[0]=t;
}
void leftRotateArray(int *ar,int n){
	int t=0;
	t=ar[0];
	for(int i=1;i<=n;i++) ar[i-1]=ar[i];
	ar[n-1]=t;
}
int main(){
	cout<<"Array Rotation"<<endl;
	cout<<"Enter Num of Element in array and X times to Rotate :";
	int d,n;
	cin>>n>>d;
	int ar[n]={0};
	cout<<"Enter the Elements :";
	for(int i=0;i<n;i++) cin>>ar[i];
	int op;
	cout<<"1.Right Rotation.\n2.Left Rotation.\n";
	cout<<"Enter the Option :";cin>>op;
	switch(op){
		case 1:
			while(d--){
				rightRotateArray(ar,n);
			}
		break;
		case 2:
			while(d--){
				leftRotateArray(ar,n);
			}
		break;
	}
	for(int a=0;a<n;a++){
		cout<<ar[a]<<" ";
	}
	cout<<"\n";
	return 0;
}
