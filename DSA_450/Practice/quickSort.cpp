#include<iostream>
using namespace std;
void swap(int* i,int* j){
	*i = *i + *j;
	*j = *i - *j;
	*i = *i - *j;
}
int part(int ar[],int l,int r){
	int pi = ar[r];
	int i= l-1;
	for(int j = l;j<=r-1;j++){
		if(ar[j]<=pi){
			i++;
			swap(ar[i],ar[j]);
		}
	}
	swap(ar[i+1],ar[r]);
	return i+1;
}
void quickSort(int ar[],int l,int r){
	if(l<r){
		int piv = part(ar,l,r);
		quickSort(ar,l,piv-1);
		quickSort(ar,piv+1,r);
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
	quickSort(ar,0,n);
	print(ar,n);
	return 0;
}
