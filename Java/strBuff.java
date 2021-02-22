class strBuff{
	public static void main(String[]args){
		StringBuffer sb=new StringBuffer();
		StringBuffer sb1=new StringBuffer("Lucknow");
		StringBuffer sb2=new StringBuffer(10);

		System.out.println(sb.capacity());
		System.out.println(sb.length());
		System.out.println(sb1.capacity());
		System.out.println(sb1.length());
		System.out.println(sb2.capacity());
		System.out.println(sb2.length());
	}
}
