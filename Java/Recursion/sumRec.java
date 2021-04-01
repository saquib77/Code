class sumRec{
	int sum(int x){
		if(x==1) return 1;
		return x+sum(x-1);
	}
	public static void main(String[]args){
		sumRec s = new sumRec();
		int x=s.sum(5);
		System.out.println(x);
	}
}
