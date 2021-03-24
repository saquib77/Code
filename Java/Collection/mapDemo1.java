import java.util.*;
class mapDemo1{
	public static void main(String[]args){
		HashMap<Integer,String>hm = new HashMap<Integer,String>();
		hm.put(1,"Mahesh");
		hm.put(2,"Suresh");
		hm.put(3,"kalpesh");
		hm.forEach((k,v)->{
			System.out.println(k+" "+v);
		});
	}
}
