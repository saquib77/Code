class powerOf4{
	public static void main(String[]args){
		int x=65;
		int c=0,p=0;
        	while(x!=0){
        		if((x&1)==1) c++;
        		p++;
			x=x>>1;
        	}
        	if(c==1 && (p&1)==1) System.out.println("A power of 4");
		else System.out.println("Not a power of 4");
	}
}
