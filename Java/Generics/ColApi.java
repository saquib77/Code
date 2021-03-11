import java.util.*;
class ColApi{
	public static void main(String[]args){
		ArrayList al = new ArrayList();
		al.add(30);
		al.add(3.5f);
		al.add("Lucknow");
		int y = ((Integer)al.get(0)).intValue();
		Object obj = al.get(2);
		System.out.println(y+" "+obj);
	}
}
