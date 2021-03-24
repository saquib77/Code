import java.util.*;
class mapDemo{
	public static void main(String[]args){
		HashMap<Integer,String>hm = new HashMap<Integer,String>();
		hm.put(8,"Mahesh");
		hm.put(7,"Suresh");
		hm.put(6,"kalpesh");
		hm.put(5,"Saquib");
		hm.put(4,"Mujeeb");
		hm.put(3,"Udbhav");
		hm.put(2,"Junaid");
		hm.put(1,"Rishav");
/*		for(int i=1;i<=hm.size();i++){
			System.out.println(i+" "+hm.get(i));
		}*/
		/*Collection<String> k = hm.values();
		for(String i : k){
			System.out.println(i);
		}*/

/*		Set<Map.Entry<Integer,String>> sme = hm.entrySet();
		for(Map.Entry<Integer,String> i : sme){
			System.out.println(i.getKey()+" "+i.getValue());
		}*/

		Set<Integer>s=hm.keySet();
		Iterator it = s.iterator();
		while(it.hasNext()){
			System.out.println(hm.get(it.next()));
		}
	}
}
