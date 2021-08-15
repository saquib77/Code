#include<iostream>
using namespace std;
void selectionSort(int ar[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ar[i]>ar[j]) swap(ar[i],ar[j]);
		}
	}
}
void print(int ar[],int n){
	for(int i=0;i<n;i++) cout<<ar[i]<<" ";
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];
	selectionSort(ar,n);
	print(ar,n);
	return 0;
}
