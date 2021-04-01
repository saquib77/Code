    #include<bits/stdc++.h>
    using namespace std;
    int digitSum(int n){
    	int sum=0,m;
    	while(n>0){
    		m=n%10;
    		sum+=m;
    		n/=10;
    	}
    	return sum;
    }
    int main(){
    	long long int t;
    	cin>>t;
    	while(t--){
    		long long int n,res;
    		cin>>n;
    		long long int sum = digitSum(n);
    		while(1){
			sum=digitSum(n);
    			res = __gcd(n,sum);
    			cout<<n<<" "<<sum<<" "<<res<<endl;
			if(res>1){
    				cout<<n<<endl;
    				break;
    			}
    			n++;
    			sum++;
    		}
    	}
    	return 0;
    }
