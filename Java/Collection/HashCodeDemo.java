class HsDemo{
	String s;
	int a;
	HsDemo(String x,int y){
		s=x;
		a=y;
	}
}
class hsDemo{
	public static void main(String[]args){
		HsDemo h1 = new HsDemo("Saquib",20);
		HsDemo h2 = new HsDemo("Saquib",20);
		int x = h1.hashCode();
		int y = h2.hashCode();
		System.out.println(x+" "+y);
	}
}
