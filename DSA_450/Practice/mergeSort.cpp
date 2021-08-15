#include<iostream>
using namespace std;
void merge(int ar[],int l,int m,int r){
	int n1 = m-l+1;
	int n2 = r-m;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++) a[i] = ar[l+i];
	for(int i=0;i<n2;i++) b[i] = ar[m+i+1];
	int i=0,j=0,k=l;
	while(i<n1 && j<n2){
		if(a[i]<b[j]) ar[k++] = a[i++];
		else ar[k++] = b[j++];
	}
	while(i<n1) ar[k++] = a[i++];
	while(j<n2) ar[k++] = b[j++];
}
void mergeSort(int ar[],int l,int r){
	if(l<r){
		int mid = (l+r)/2;
		mergeSort(ar,l,mid);
		mergeSort(ar,mid+1,r);
		merge(ar,l,mid,r);
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
	mergeSort(ar,0,n);
	print(ar,n);
	return 0;
}
