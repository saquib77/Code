package mypkg;
class assertionDemo{
	public static void main(String[] args){
		int x = -10;
		assert x>=0 : "X must be Greater then 0";
		double d = Math.sqrt(x);
		System.out.println(d);
	}
}
