#include<iostream>
using namespace std;
void insertionSort(int ar[],int n){
	for(int i=1;i<n;i++){
		int cur = ar[i];
		int j = i-1;
		while(ar[j]>cur && j>=0){
			ar[j+1] = ar[j],j--;
		}
		ar[j+1] = cur;
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
	insertionSort(ar,n);
	print(ar,n);
	return 0;
}
