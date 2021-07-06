#include<stdio.h>
#include<stdlib.h>
void merge(int* a,int l,int mid,int h){
	int n = mid-l+1;
	int m = h-mid;
	int a1[n];
	int a2[m];
	for(int i=0;i<n;i++) a1[i] = a[l+i];
	for(int i=0;i<m;i++) a2[i] = a[mid+1+i];
	int i=0,j=0,k=l;
	while(i<n && j<m){
		if(a1[i]<=a2[j]) a[k]=a1[i++];
		else a[k]=a2[j++];
		k++;
	}
	while(i<n) a[k++]=a1[i++];
	while(j<m) a[k++]=a2[j++];
}

void merge1(int* a,int la,int* b,int lb){
	int i=la-1,j=lb-la-1,k=lb-1;
	while(i>=0 && j>=0){
		if(a[i]<=b[j]){
			b[k]=b[j];
			j--;
		}else{
			b[k]=a[i];
			i--;
		}
		k--;
	}
	while(i>=0){
		b[k]=a[i];
		k--,i--;
	}
}
void merge2(int* a,int i,int j,int la){
	int k=j+1;
	while(i<=j && k<=la){
		if(a[i]<=a[k]) i++;
		else{
			int t=a[k];
			int idx = k;
			while(idx!=i){
				a[idx]=a[idx-1];
				idx--;
			}
			a[i]=t;
			i++;
			j++;
			k++;
		}
	}
}
void MergeSort(int* a,int l,int h){
	if(l<h){
		int mid = (l+h)/2;
		MergeSort(a,l,mid);
		MergeSort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}
int main(){
	int a[] = {1,3,8,12};
	int b[] = {1,3,8,12,2,5,9,10,43,19,55,6,13,7};
	int la = sizeof(a)/sizeof(a[0]);
	int lb = sizeof(b)/sizeof(b[0]);
	//int* res = merge(a,la,b,lb);
	//merge1(a,la,b,lb);
	//merge2(b,0,3,lb);
	MergeSort(b,0,lb-1);
	for(int i=0;i<lb;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}
