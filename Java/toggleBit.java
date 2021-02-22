class toggleBit{
	public static void main(String[]args){
		int x=10,y;
		int pos=2;
		y=x^(1<<(pos-1));
		System.out.println(x&y);
	}
}
