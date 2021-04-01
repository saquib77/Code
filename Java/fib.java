import java.util.*;
class fib{
	ArrayList<Integer> ar;
	fib(int size){
		ar = new ArrayList<Integer>(size);
		ar.add(0);
		ar.add(1);
		ar.add(1);
	}
	int fibDP(int n){
		if(ar.get(n)==0){
			ar.set(n,fibDP(n-1)+fibDP(n-2));
		}
		return ar.get(n);
	}

	public static void main(String[]args){
		fib fb = new fib(6);
		int res = fb.fibDP(5);
		System.out.println(res);
	}
}
