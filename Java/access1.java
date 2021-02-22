package mpkg;
import mypkg.AccessDemo;
class AccessDemo1 extends AccessDemo{
	public static void main(String[]args){
		AccessDemo2 a=new AccessDemo2();
		System.out.println(a.y+" "+a.z);
	}
}
