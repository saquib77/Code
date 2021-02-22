class Meth{
	public static void main(String[]args){
		String s=new String("Lucknow");
		String s1=new String("   kanpur   ");
		String s2=s.concat(s1);
		System.out.println(s2);
		char c=s.charAt(4);
		System.out.println(c);
		int idx=s.indexOf(c);
		System.out.println(idx);
		String k=s.toUpperCase();
		System.out.println(k);
		String k1=s.toLowerCase();
		System.out.println(k1);
		String k2=s.trim();
		System.out.println(k2);
		String k3 = s.substring(4,7);
		System.out.println(k3);
		String k4 = s.substring(4);
		System.out.println(k4);
		char[] k5=s.toCharArray();
		k5[4]='W';
		String k6=new String(k5);
		System.out.println(k6);
		String l = new String("Lucknow Junction East");
		String[] sa = l.split("n");
		for(int i=0;i<sa.length;i++){
			System.out.println(sa[i]);
		}
	}
}
