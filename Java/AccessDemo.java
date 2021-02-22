package mypkg;
public class AccessDemo{
//	int x=10;
	public int y=20;
	protected int z=30;
//	private int k=40;
	public static void main(String[]args){
		AccessDemo a=new AccessDemo();
		System.out.println(a.y+" "+a.z);
	}
}
