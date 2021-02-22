import java.util.*;
class arList{
	public static void main(String[]args){
		ArrayList a=new ArrayList();
		a.add(2);
		a.add("Lucknow");
		a.add(3.54f);
		int x=((Integer)a.get(0)).intValue();
		System.out.println(x);
		for(int i=0;i<a.size();i++){
			System.out.println(a.get(i));
		}
	}
}
