import java.util.*;
class vectDemo{
	public static void main(String[]args){
		Vector<Integer> v1 = new Vector<Integer>();
		v1.add(10);
		v1.add(20);
		v1.add(30);
		Vector<Integer> v = new Vector<Integer>(v1);
		Enumeration<Integer> e = v1.elements();
		while(e.hasMoreElements()){
			System.out.println(e.nextElement());
		}
	}
}
