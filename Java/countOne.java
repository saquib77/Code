class cOne{
	public static void main(String[]args){
		int x=10;
		int count=0;
		//while(x>0){
		//	count++;
		//	x=(x&(x-1));
		//}
		//System.out.println(count);
		while(x>0){
			if((x&1)==1) count++;
			x=x>>1;
		}
		System.out.println(count);
	}
}
