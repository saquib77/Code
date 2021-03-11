import java.util.*;
class colnApi{
	public static void main(String[]args){
		HashMap<Integer,Integer> hm = new HashMap<>();
		hm.put(1,100);
		hm.put(2,200);
		int x=hm.get(1).intValue();
		System.out.println(x);	
		for(Integer a : hm.keySet()){
			System.out.println(hm.get(a));
		}
	}
}
