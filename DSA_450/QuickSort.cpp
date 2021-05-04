#include<bits/stdc++.h>
using namespace std;
class QuickSort{
public:
	
};
int main(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    QuickSort m;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    m.quicksort(arr,0,n);
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    }
    return 0;
}
