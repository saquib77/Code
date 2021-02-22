class str{
	public static void main(String[]args){
		String s="Lucknow";
		String s1=new String("Kanpur");
		String s2="Lucknow";
		String s3=new String("Kanpur");
		boolean b=(s==s2);
		System.out.println(b);
		boolean c=s1.equals(s3);
		System.out.println(c);
	}
}
